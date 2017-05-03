# jQuery Functions Cheat Sheet

All jQuery code should reside in a ```<script>``` element like this, below:
```
<script>
  $(document).ready(function() {
    
  });
</script>
```
The above snippet is basically an event callback and is called when the ```$(document)``` is fully downloaded and rendered(?) by the client browser. This is necessary because running a jQuery function on an incompletely loaded document can lead to unexpected behaviour.

The ```$``` operator (also called a bling) is used to specify selectors. A selector can be specified as ```$("h1")```, which will select all ```<h1>``` elements in the document. Similarly ```$(document)``` selects the whole document. Classes can be selected like, ```$(".my-class")``` and ids like, ```$("#my-id")```.

#### .addClass()

Adds a class to the selector. Example:
```
$(".my-class").addClass("text-center text-primary");
```
Note that multiple classes can be added by listing them, separated by spaces.


#### .removeClass()

Removes class from selector.


#### .css()

Changes the CSS style of a selector. Example:
```
$(".my-class").css("color","blue");
```


#### .prop()
Adjust properties (attributes) of elements. Example:
```
$("button").prop("disabled", true);
```


#### .html()
Changes the HTML content within the selector.
```
$(".my-div").html("<h1>Header 1</h1>");
```

#### .text()
Changes only the text content within the selector, without evaluating any HTML tags. Example:
```
$(".my-div").html("<h1>Header 1</h1>");
```
will show "\<h1\>Header 1\<\/h1\>" header as it is in .my-div.


#### .remove()
Completely remove the selector from HTML document.
```
$(".my-div").remove();
```


#### .appendTo()
Move the selected element to the element provided.
```
$("#my-button").appendTo("#my-id");
```
If a class is provided, then a new instance of the class will be created and the selector will be plced inside it (?)

#### .clone()
Makes a copy (only object, no actual copying) of the selector element. 
A function chain can be made to actually copy the element to a second location, like this
```
$("#my-button").clone().appendTo("#my-id");
```

#### .parent()
Returns the parent element of the selected element.

#### .children()
Returns all children of the selected element.

#### :nth-child selector 
This is not a jQuery component, but a useful tool nonetheless.
This is used to select the elements which are nth child of their parent. So
```
$("#my-id:nth-child(2)").clone();
```
will make a clone of the 2nd child of ```#my-id```s parent, if it exists.

The nth child selector can also take inputs like ```odd``` and ```even```, and formulas like ```3n+2```. The formula should always be in the format ```an+b```, where ```a``` represents cycle size and ```b``` represents offst.

The ```even``` and ```odd``` are separate selectors in themselves.
```
$(#child:even).clone();
```