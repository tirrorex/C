//
//  FirstViewController.swift
//  fairedusexe
//
//  Created by swift on 19/12/14.
//  Copyright (c) 2014 swift. All rights reserved.
//

import UIKit

struct clubs {
    var title = ""
    var subtitle = ""
    var latitude = 0.0
    var longitude = 0.0
}

var items = [
    clubs(title: "Les Chandelles",subtitle: "select et légendaire",latitude: 48.8655454,longitude: 2.3366674),
    clubs(title: "Le Mask",subtitle: "branché et anti-snob",latitude: 48.8701032,longitude: 2.3409343),
    clubs(title: "Overside",subtitle: "festif et cul",latitude: 48.8474472,longitude: 2.3222218),
    clubs(title: "Le Taken",subtitle: "chic et secret",latitude: 48.8521018,longitude: 2.3545571),
    clubs(title: "Le Moon City",subtitle:  "chill-out et exotique",latitude: 48.883019,longitude: 2.3367941)
]

class FirstViewController: UIViewController , UITableViewDelegate, UITableViewDataSource {
    @IBOutlet
    var tableView: UITableView!

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        self.tableView.registerClass(UITableViewCell.self, forCellReuseIdentifier: "cell")
    
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    
    func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return items.count;
    }
    
    func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
        var cell:UITableViewCell = self.tableView.dequeueReusableCellWithIdentifier("cell") as UITableViewCell
        
        cell.textLabel.text = items[indexPath.row].title
        
        return cell
    }
    
    func tableView(tableView: UITableView,
        didSelectRowAtIndexPath indexPath: NSIndexPath) {
        println("You selected cell #\(indexPath.row)!")
        //let vc = fiViewController(nibName: "fiViewController", bundle: nil)
        //vc.element = items[indexPath.row]
        //navigationController?.pushViewController(vc, animated: true)
    }

}


