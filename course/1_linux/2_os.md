# Operating System basics #

* What does an Operating System (OS) do?
  * OS manages hardware and applications
  * user <> application <> OS <> hardware
  * For example, the OS manages hardware like:
    * micro SD card
    * the display (HDMI)
    * keyboard and mouse
    * network (WiFi or Ethernet)
  * it also does security, to prevent unauthorized ppl from using the system

* regular user vs. super user
  * try making a file in your home folder (/home/rpi)
  * now try making a file in /, or /bin, or /usr/bin (you can't)
  * those are protected folders, meant to protect against bad people and yourself
  * (why yourself? recall what rm -rf does. if forgot, re-do the exercise)

* super user, or administrator, is called `root`
* to do something as root, run `sudo` and the command follows it
* some system will ask for a password, some might not
* try using `sudo` to create a file in `/` (remember to carefully remove it afterwards)
* "great power comes great responsibility"
* basically, the `sudo` command protects the system

* introduce `apt`. it is a package management system
 * packages are software that you can install on to the system from the Internet
 * run `apt-get update` to refresh the software list. the list changes over time
 * run `apt-cache search <keyword>` to search for software. try searching for anything minecraft related.
 * let's install a very important text editor called `vim`
 * `apt-get install vim`

* let's use it to edit `/boot/config.txt`
 * for some reason, this monitor doesn't work correctly with the rpi (probably the dongle)
 * let's fix it
 * copy the `/boot/config.txt` to save it, in case we mess up
 * run `sudo vim /boot/config.txt` to edit it
 * vim is hard to use, but it's powerful
 * let's move the cursor around, use arrow keys. you're in cursor mode.
 * to add characters to the file, type `i` and start typing. you're in edit mode.
 * hit escape when done. now you're back to cursor mode.
 * to delete characters, type `x`.
 * to save the file, make sure you're in cursor mode (hit escape) and type `:w`
 * to quit vim, make sure you're in cursor mode (hit escape) and type `:q`

* explain the columns in `ls -al`
