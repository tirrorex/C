//
//  SecondViewController.swift
//  fairedusexe
//
//  Created by swift on 19/12/14.
//  Copyright (c) 2014 swift. All rights reserved.
//

import UIKit
import MapKit
import CoreLocation

class SecondViewController: UIViewController, CLLocationManagerDelegate {
    
    
    @IBOutlet weak var bouton: UIButton!
    @IBOutlet weak var bartrololol: UISegmentedControl!
    @IBOutlet weak var mapView: MKMapView!
    
    let locationManager = CLLocationManager()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        var location = CLLocationCoordinate2D(
            latitude: 48.896680,
            longitude: 2.318397
        )
        
        let span = MKCoordinateSpanMake(0.002, 0.002)
        var region = MKCoordinateRegion(center: location, span: span)
        
        mapView.setRegion(region, animated: true)
        mapView.mapType = MKMapType.Satellite
        var annotation = MKPointAnnotation()
        annotation.setCoordinate(location)
        annotation.title = "ECOLE 42"
        annotation.subtitle = "Cybercafé, Hôtel et Cinéma"
        mapView.addAnnotation(annotation)
        for position in items {
            location = CLLocationCoordinate2D(
                latitude: position.latitude,
                longitude: position.longitude
            )
            annotation = MKPointAnnotation()
            annotation.setCoordinate(location)
            annotation.title = position.title
            annotation.subtitle = position.subtitle
            mapView.addAnnotation(annotation)
        }
    }
    
    @IBAction func bartrololol(sender: AnyObject!)
    {
        let segmentedControl = sender as UISegmentedControl
        switch segmentedControl.selectedSegmentIndex {
        case 0:
        self.mapView.mapType = MKMapType.Standard;
        case 1:
        self.mapView.mapType = MKMapType.Hybrid;
        case 2:
        self.mapView.mapType = MKMapType.Satellite;
        default:
        self.mapView.mapType = MKMapType.Standard;
        }
    }
    
    
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    @IBAction func findMyLocation(sender: AnyObject) {
        locationManager.delegate = self
        locationManager.desiredAccuracy = kCLLocationAccuracyNearestTenMeters
        locationManager.requestWhenInUseAuthorization()
        locationManager.startUpdatingLocation()
    }
    
    func locationManager(manager: CLLocationManager!, didUpdateLocations locations: [AnyObject]!) {
        CLGeocoder().reverseGeocodeLocation(manager.location, completionHandler: {(placemarks, error)->Void in
            
            if (error != nil) {
                println("Reverse geocoder failed with error" + error.localizedDescription)
                return
            }
            
            if placemarks.count > 0 {
                let pm = placemarks[0] as CLPlacemark
                self.displayLocationInfo(pm)
            } else {
                println("Problem with the data received from geocoder")
            }
        })
    }
    
    func displayLocationInfo(placemark: CLPlacemark?) {
        if let containsPlacemark = placemark {
            //stop updating location to save battery life
            locationManager.stopUpdatingLocation()
            let locality = (containsPlacemark.locality != nil) ? containsPlacemark.locality : ""
            let postalCode = (containsPlacemark.postalCode != nil) ? containsPlacemark.postalCode : ""
            let administrativeArea = (containsPlacemark.administrativeArea != nil) ? containsPlacemark.administrativeArea : ""
            let country = (containsPlacemark.country != nil) ? containsPlacemark.country : ""
            println(locality)
            println(postalCode)
            println(administrativeArea)
            println(country)
            self.mapView.setRegion(MKCoordinateRegionMake(CLLocationCoordinate2DMake (containsPlacemark.location.coordinate.latitude, containsPlacemark.location.coordinate.longitude), MKCoordinateSpanMake(0.002, 0.002)), animated: true)
            mapView.showsUserLocation = true;
            
        }
        
    }
    
    func locationManager(manager: CLLocationManager!, didFailWithError error: NSError!) {
        println("Error while updating location " + error.localizedDescription)
    }
  
}

