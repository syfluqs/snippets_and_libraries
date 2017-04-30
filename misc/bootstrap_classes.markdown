# Bootstrap Classes Cheatsheet

This file contains the most commonly used bootstrap classes and a short description.

- **.container-fluid** : A container class for responsive page structure. Automatically adjusts to screen width.
- **.img-responsive** : Make images responsive, they occupy the whole screen width.
- **.text-center** : Center text in a div.
- **.text-primary** : Primary color scheme for text content.
- **.text-danger** : Danger (red) color scheme for text content.
- **.btn** : Bootstrap button class.
- **.btn-block** : Used with **btn** class to make a button span whole width of the page.
- **.btn-primary** : Primary color scheme for buttons. Requires **btn** as well.
- **.btn-default** : Default button scheme. Requires **btn** as well.
- **.btn-info** : Info button color scheme. Requires **btn** as well.
- **.btn-danger** : Danger button color scheme. Requires **btn** as well.
- **.row** : Places one div container div as a row structure that occupies the full width of screen. 
- **.col-*xx*-\*** : Implements the 12-column grid layout of Bootstrap. *xx*=xs for e**x**tra-**s**mall devices (mobile), *xx*=md for **m**e**d**ium sized devices (desktop). *\** denotes the grid column width. Any div with this class are placesd side by side for medium sized devices and stacked for small screen devices, unless placed within a div with **row** class (?). Also if placed inside a **row** class, the widths should all add up to 12 to be placed in a single line.
- **.form-control** : Bootstrap form elements class.
- **.well** : Class to create a visual sense of depth for a ```<div>```


## Font Awesome 

Font Awesome is a library of SVG icons.
Include it in the HTML file with 
```
<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/font-awesome/4.5.0/css/font-awesome.min.css"/>
```
Use class ```fa``` and the corresponding icon class to show an icon. Icons will assume the size of their parent. Commonly an <i> tab is used for showing icons, like this
```
<i class="fa fa-thumbs-up"></i>
```

#### Some icons (class names) in Font Awesome 
- ```fa-thumbs-up```
- ```fa-info-circle```
- ```fa-trash```
- ```fa-paper-plane```