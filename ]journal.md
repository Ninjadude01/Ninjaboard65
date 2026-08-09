# Ninjaboard 65 — Journal Export

- Exported at: 2026-08-09T07:03:44Z
- Project ID: 1090
- Entries: 33

## Entry 1
- ID: 758
- Author: Jason
- Created At: 2026-03-31T01:32:18Z

### Content

This marks the begining of my 65% keyboard project! During this session, I made a basic layout of my keyboard using Keyboard Layout Editor.com, and based it on other 65% keyboards with knobs. I then opened the png file in microsoft paint, and drew lines representing how the keys will be arranged in my matrix (I will be using a raspberry pi pico).
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTcwNiwicHVyIjoiYmxvYl9pZCJ9fQ==--200b455847a5c8fb7be9923e67a6779e8a8478f3/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/e0edc1bf-1f4d-4dc9-a120-265026fc80da/video.mp4

## Entry 2
- ID: 1085
- Author: Jason
- Created At: 2026-04-04T00:47:19Z

### Content

In this session, I designed the schematic for my keyboard! I started off by creating a matrix for my keyboard switches, which had 15 columns and 5 rows. This was fairly easy, and I did not encounter any issues. Then, I connected the matrix to my raspberry pi pico using net labels, and also included my rotary encoder into the matrix as well. Finaly, I assigned footprints to all of the objects, and I seached up the correct lengths for the differently sized keyswitches (like caps lock).  However, while writing this journal, I realized that I had preivously saved the json file with keyswitch size information, so I could have just used that instead. Additionally, I just realized that since I plan on using Kailh Hot-swaps, I have to re-update the footprints, as I used regulary cherry mx ones. 

![Screenshot 2026-04-03 193954.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjM5MiwicHVyIjoiYmxvYl9pZCJ9fQ==--e077beabb499ba68d633f1db28b71c9df8fbf5aa/Screenshot 2026-04-03 193954.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjM5MywicHVyIjoiYmxvYl9pZCJ9fQ==--7ee977446e6d2f6ce1f7c69b0f6fd57fce992e4b/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/1fd63acb-b9a2-4a79-a5b1-da56e13a5df0/video.mp4

## Entry 3
- ID: 1151
- Author: Jason
- Created At: 2026-04-04T16:43:58Z

### Content

In this session, I redid my footprints for my switches, as I had preivously used regular mx footprints instead of kailh hot swap sockets, as that is what I will be using. Next, I finished up my schematic and transfered everything over to the pcb editor, which is where I spent the majority of this session. I arranged all of the switches in the correct order and aligned them, and aligned each diode to its respective switch. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjU0OSwicHVyIjoiYmxvYl9pZCJ9fQ==--b6251dfaf2a2617808a983e7927e65cf2ae7b707/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjU1MCwicHVyIjoiYmxvYl9pZCJ9fQ==--3e2c49b4e3a43f6b98fc57c417eb049323546c8f/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/PlbRId4kyrf7/timelapse-PlbRId4kyrf7.mp4

## Entry 4
- ID: 1240
- Author: Jason
- Created At: 2026-04-05T14:58:12Z

### Content

In these sessions, I made lots of progress on my pcb design. First, I added stabilizer footprints for keys that were 2u or bigger, which took some time as I couldnt figure out how to add them into the schematic, so in the end I just only included them in the pcb design. Next, I wired everything together, which was pretty fun. However, after finishing wiring, I suddenly realized it would make more sense if the raspberry pi pico was in the top left corner, as it would make inserting a usb cable much more easy. So, moved the pico and redid all the wiring again.

![Screenshot 2026-04-05 000142.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6Mjc0NywicHVyIjoiYmxvYl9pZCJ9fQ==--8fbeb87d295acc46dbd64990a521fda1e3a99e58/Screenshot 2026-04-05 000142.png)

After re-wiring:

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6Mjc0OCwicHVyIjoiYmxvYl9pZCJ9fQ==--286b5237211a1965d013f248f75988b6e2ebf8ad/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/qJngH_yfqIN2/timelapse-qJngH_yfqIN2.mp4
- https://public.lapse-hackclub.link/timelapses/2WuE_d56xltV/timelapse-2WuE_d56xltV.mp4
- https://public.lapse-hackclub.link/timelapses/rPAdtSB2B5R-/timelapse-rPAdtSB2B5R-.mp4

## Entry 5
- ID: 1279
- Author: Jason
- Created At: 2026-04-05T22:53:31Z

### Content

In this long session, I imported the step files for the keyswitches and keycaps into keycad, and assigned them to the switches. This took a fair bit of time the hot swap sockets rotated 180 degrees when I assigned a step file to it, and I tried to figure out why but I eventualy just rotated every single one back to its original position. Next, I decided that I did not like the look of the white keycaps, so I found 3d models of keycaps online and turned them blue. However, they were all grouped together so I had to seperate them by size and re-export the individual keycap switches. After opening them up in kicad 3d editor, I realized that they were completly off-centred and would take way too long to move each of them to where it should be. So, I went back to fusion and moved the keycaps to the point of origin, then exported them again. I also decided that the rasberry pi pico was too close to the rest of the board, so I shifted it farther away and re-routed some of the traces. Additionally, I wrote my name on the silkscreen and added an image of snorlax, found the correct footprint for screw -in pcb mount stabilizers and step files, and finished by adding in the 3d model for my rotary encoder.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjgyMSwicHVyIjoiYmxvYl9pZCJ9fQ==--9bf10cd3cf76d2f3e1a948880e35ae11d46c2a2a/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/I3i7ij6T0IfF/timelapse-I3i7ij6T0IfF.mp4

## Entry 6
- ID: 1282
- Author: Jason
- Created At: 2026-04-05T23:53:04Z

### Content

In this session, I found some cool hack club stickers and added them to my board, did some searching, managing to find a 6mm dshaft volume knob for my keyboard. This is not the one that I will be using in real life, however I could not find any better ones, and it matched the dimensions of the knob I plan to use. I downloaded the step file of my project and imported it into fusion. However, for some reason the blue color of my keycaps dissapeared and turned into silver, so I had to manualy recolor them blue.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjgyNiwicHVyIjoiYmxvYl9pZCJ9fQ==--c12300e532f337db80e54de6a1eca4b4223e9028/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjgyNywicHVyIjoiYmxvYl9pZCJ9fQ==--f88c16686be7d281259a16188e17a9ed465818df/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/NinEhSppckm2/timelapse-NinEhSppckm2.mp4

## Entry 7
- ID: 1339
- Author: Jason
- Created At: 2026-04-06T16:29:37Z

### Content

In this session, I downloaded the dril and gerber files so I could have a rough estimate on how much it would cost. Before shipping and taxes, it will be around $30, which is what I expected. I also redid the silkscreen, as before I had unknowingly inserted images that were saved as F.cu files, when they were supposed to be on the silkscreen layer. I found a cool font for my username, and arranged that along with 2 other images onto the back of my pcb. I also changed the appearance to white, as that will be the color of the pcb I order. At the end, I realized that all of my switches were slightly missagligned, which is bad news. This means that I will have to re-align them in the pcb editor, and I plan to do that by either changing the grid size or seaching up alternative ways. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6Mjk1OSwicHVyIjoiYmxvYl9pZCJ9fQ==--4f42b27d6f4568754853438b8c52e3fb4647669c/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6Mjk2MCwicHVyIjoiYmxvYl9pZCJ9fQ==--5d8a727178501b9fc8346128eb4f28876b8440d2/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/GyU2iL50QWxO/timelapse-GyU2iL50QWxO.mp4
- https://public.lapse-hackclub.link/timelapses/uCtk4c5pN-Gl/timelapse-uCtk4c5pN-Gl.mp4

## Entry 8
- ID: 1507
- Author: Jason
- Created At: 2026-04-08T19:45:34Z

### Content

In this session, I began to set up qmk software for my keyboard. This was a bit challenging, as I had never set up QMK for a keyboard before. I tried doing reaserch and following some tutorials, and I think I set up the matrixes correctly. However, when compiling, I ran into a few errors. I decided to take a break and start working on my pcb again. I decided to redo my layout as I had previously found out that all my key switches were slightly missaligned, and after doing some searching I decided that the best way to ensure that the key switches match the plate is to use a keyboard layout tool. This tool takes my keyboard layout json file and compares it to my schematic diagram, and places the keyswitches accordingly. However, I had to manually re-position the diodes as it gave an error when it tried to do so. 
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzMxNSwicHVyIjoiYmxvYl9pZCJ9fQ==--83102359c14c430b5eae2b83e9cf56b2bf451b0b/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzMxNiwicHVyIjoiYmxvYl9pZCJ9fQ==--5aaaffd1ddfc3fdbdcd2a6cd0560eb5f22898e99/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/UJ_ftO11lFsA/timelapse-UJ_ftO11lFsA.mp4
- https://public.lapse-hackclub.link/timelapses/ldOXrITiBRZ4/timelapse-ldOXrITiBRZ4.mp4
- https://public.lapse-hackclub.link/timelapses/VglIb1ZjUKgE/timelapse-VglIb1ZjUKgE.mp4

## Entry 9
- ID: 1531
- Author: Jason
- Created At: 2026-04-08T23:13:54Z

### Content

In this session, I finished re-wiring my pcb! I am much more pleased with the updated wiring as it now looks much more clean and organized. I re-added step files for the remaining keys, and found a cooler-looking keycap to use for my 3d render. After doing some searching, I realized that I had oriented my stabilizers in the wrong direction, the long horizontal wire is supposed to face away from you, which I did not know previously. Additionally, I began to set up my project's github repository (I created it, made folders for orginization, wrote some sentences for readme), and I did not face any issues as I have made many repo's in the past. I also created a BOM for my keyboard, which was also fairly easy as I already had links to the materials I wanted to use saved. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzM2OSwicHVyIjoiYmxvYl9pZCJ9fQ==--b6b1522eb7c54fb01a11c394085692b180cbfdac/image.png)


![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzM3MCwicHVyIjoiYmxvYl9pZCJ9fQ==--5cfa1f780e58c1cabc939a992b96e183b964f7ab/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzM3MSwicHVyIjoiYmxvYl9pZCJ9fQ==--c40ef89863bfa6df4434feae0c2e4fea0ccd1139/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/FRLDS4sf-OgI/timelapse-FRLDS4sf-OgI.mp4
- https://public.lapse-hackclub.link/timelapses/fARfWQaDln-o/timelapse-fARfWQaDln-o.mp4

## Entry 10
- ID: 1599
- Author: Jason
- Created At: 2026-04-09T18:12:43Z

### Content

In this session, I checked over my wiring for my pcb by comparing it to a picture I made at the start of this project for how I wanted the keys to be wired. After, I tried converting an stl file of a volume knob into a step file, which was a bit challenging as it took me many tries. I eventually figured out how (there was a convert mesh button , and I also updated the step file of my keyboard in fusion, as it still had the old version. Then, I did some mearsuing and started working on the case for my keyboard. I decided to make the thickness of the plate 1.5mm as anything thinner than that would easily snap, and if it was too thick the swtiches may not fit in place. I also used a 0.8mm gap between the pcb and the inside of the case, as I wanted to have a decent amount of room incase something goes wrong.


![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzQ4MSwicHVyIjoiYmxvYl9pZCJ9fQ==--1ec9a3a415ede49dc12a6a59a383206cd8c088c8/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzQ4NiwicHVyIjoiYmxvYl9pZCJ9fQ==--dc6bd32a9510546698c0fb5687be8d91db47bad8/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/E6hbsl_Bn9vQ/timelapse-E6hbsl_Bn9vQ.mp4
- https://public.lapse-hackclub.link/timelapses/atyrOp7Au6Ia/timelapse-atyrOp7Au6Ia.mp4

## Entry 11
- ID: 1623
- Author: Jason
- Created At: 2026-04-10T01:14:17Z

### Content

This session began with me deciding if I wanted to change my raspberry pi pico footprint. This is because some people said that the source I used for my footprint (easyeda) may not be the most reputable source, as measurements could be innacurate. I tried switching the footprint to an official kicad one, however I could not figure out how to do that as none of the wires could connect to the new rasp pi pico. Additionally, I did some measurements and visual checking, and it seemed like it matched the atcual 3d model of the pico, which is why I eventually decided just to stick with it. Next, I did some reaseach on what type of mount I wanted to use for my keyboard, and I settled on a samwich mount as it seemed simple and suited my build. I added in headers to the fusion project and aligned them with the pico and pcb, worked on improving the case, as well as the plate. Finally, I added 2 canvas layers of my project name as well as a sword, sketched them, and extruded. This is because there was some extra space left, and I wanted to add some flair to my keyboard. I chose a sword since the name of my keyboard is ninja themed, and a sword fit that theme perfectly. 


![Screenshot 2026-04-09 205256.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzUzOCwicHVyIjoiYmxvYl9pZCJ9fQ==--6945a901ee1b2a6604c1ac80dd8bd4c04dd5dc52/Screenshot 2026-04-09 205256.png)

![Screenshot 2026-04-09 205332.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzUzOSwicHVyIjoiYmxvYl9pZCJ9fQ==--5590968759ddc05acf0622002cbbede08294818d/Screenshot 2026-04-09 205332.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/PD2WxtaaAGvH/timelapse-PD2WxtaaAGvH.mp4
- https://public.lapse-hackclub.link/timelapses/r-uLrnnhkFVp/timelapse-r-uLrnnhkFVp.mp4

## Entry 12
- ID: 1714
- Author: Jason
- Created At: 2026-04-11T01:17:50Z

### Content

In this session, I began my zine poster for fallout! I didn't do  too much tho, I found a background and added in some text with my project's signature font. The majority of this session was spent working on the 3d model of the project in fusion. I found usbc cable step files and imported them into my project, as I wanted a reference for how big the cable slot should be. I then created the cutout for the cable, and made a snap-fit mechanism for the top cover of the rasp pi pico, which took a while as I was constantly increasing the height of that section and making minor changes. I then changed the case from grey to white, and updated the plate hole cutouts for stabilizers. This is because the plate generator I used created stabilizer cutouts for cherry style stabs, however I will be using a different type so I had to widen the cutouts to match. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzY4NywicHVyIjoiYmxvYl9pZCJ9fQ==--0374a79114519df9964e6817a6da94851aecbc9c/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzY4OCwicHVyIjoiYmxvYl9pZCJ9fQ==--da06b6fe6fad88279dccd310123630f977d89d36/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/9WV7jROep8WE/timelapse-9WV7jROep8WE.mp4
- https://public.lapse-hackclub.link/timelapses/U66LgXoysRIj/timelapse-U66LgXoysRIj.mp4
- https://public.lapse-hackclub.link/timelapses/ko7ypMTNKImn/timelapse-ko7ypMTNKImn.mp4

## Entry 13
- ID: 1816
- Author: Jason
- Created At: 2026-04-11T20:14:00Z

### Content

In this session, I redid the enclosure mechanism for the lid of the pico, as I had forgotten to add an offset to the bottom of the lid. If I did not add an offset, the lid most likely would not have fit if I printed it, as 3d printers generally do not print exactly to your desired dimensions. Next, I added 3 small support pillars throughout the case to support the pcb, one near the centre left, another at the centre right, and a final one near the spacebar area. I added supports because without them, the keyboard will most likely warp as there is nothing supporting the centre. I used the section analysis tool a lot when doing so, as it allowed me to easily see if the supports were getting in the way of any important components like the diodes or hot-swap sockets. I then began working on my fallout zine  poster! After doing some reseach, I figured out how to add a qr code linking to your github repository, and went into the fusion renderer to get some good pictures of my keyboard. I also spent some time looking through hack club stickers, as I wanted to add some flair to my poster. While making the poster, I tested many different color themes, but untimatly ended with a dark navy as I thought it suit my project the best. 

![65- Keeb + Knob!.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6Mzg3OSwicHVyIjoiYmxvYl9pZCJ9fQ==--3e522e46aa41bc799c84f47be50edaad98e0e024/65- Keeb + Knob!.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/M09sPBH0zXZ7/timelapse-M09sPBH0zXZ7.mp4
- https://public.lapse-hackclub.link/timelapses/Tij70z0vxDah/timelapse-Tij70z0vxDah.mp4
- https://public.lapse-hackclub.link/timelapses/UaUli9nBgveE/timelapse-UaUli9nBgveE.mp4

## Entry 14
- ID: 1842
- Author: Jason
- Created At: 2026-04-12T01:25:01Z

### Content

In this session, I added in holes to my keyboard case to fit m2 heatset screws. I started by increasing the thickness of my case to 6mm, as it was originialy 4mm but I wanted it to be thicker just to be sure it wont crack when I heat up the inserts and push them in. I then extended the keyboard plate to match the new dimensions, and added in 2.3 mm holes so m2 screws could pass through, but not the head tip part. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzkzMCwicHVyIjoiYmxvYl9pZCJ9fQ==--e9b96352e48433213efc09acf443a40433109597/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzkzMSwicHVyIjoiYmxvYl9pZCJ9fQ==--433cca920c9f527e4a52e7c07e751b6d6dffbd77/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/GfDjR-qMCSmr/timelapse-GfDjR-qMCSmr.mp4
- https://public.lapse-hackclub.link/timelapses/Yr1MLM_9DIxl/timelapse-Yr1MLM_9DIxl.mp4

## Entry 15
- ID: 1919
- Author: Jason
- Created At: 2026-04-12T16:25:02Z

### Content

I spent the majority of this session improving my github repository. I finished my BOM, downloaded it as a csv, converted it into markdown, and added it into the Readme as well as the repo files. I then took screenshots of the Kicad Schematic and PCB and my project in Fusion, and added those as well. Following a fallout repo example, I organized my readme into many smaller sections with headers, such PCB and Renders. I also uploaded all of my kicad files (sch, pcb, pro), and my fusion files (step, f3z). However, since github has a limit of 25mb when you try to upload a file through the web, I had to clone the repository onto my PC and upload the files through Github Desktop, which was fairly simple as I had done it many times before. Now, all that is left for me to do before submitting is finish setting up QMK, which I know will be a bit challenging. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDA4OSwicHVyIjoiYmxvYl9pZCJ9fQ==--e684ac35acca7c2ea46c394ce4c5a5040cf7a77b/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDA5MCwicHVyIjoiYmxvYl9pZCJ9fQ==--5fbd8ba478d8aa894e6120887644d93581702ca4/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDA5MSwicHVyIjoiYmxvYl9pZCJ9fQ==--b236221cab06c9a7ead0b052421e6c3cf107b578/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/i4xb6koCGl0o/timelapse-i4xb6koCGl0o.mp4
- https://public.lapse-hackclub.link/timelapses/me9XwLB16nGQ/timelapse-me9XwLB16nGQ.mp4

## Entry 16
- ID: 1954
- Author: Jason
- Created At: 2026-04-12T20:43:51Z

### Content

In this session, I set up qmk firmware for my keyboard. I started with the .json file, and added labels and the correct spacing for each of the switches in my matrix. This was not too hard, as all I had to do was look at my color-coded picture and match it up with the matrix in the json file. I then moved onto the .c file, which was much easier than the json one. I created a layout there as a reference, and created all the base and Fn functions without much trouble. Debugging was one of my favorite parts of this session, as even though more errors would appear whenever I fixed one, I knew that I was slowly getting closer to a sucessfull compile. One example of an error that appeared often was that I accidentaly would add more key assignments than what was expected (I created 75 when 67 were expected.) In the end, I managed to sucessfully compile my keyboard. Now all thats left for me to do before submitting for review is some final checks!

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDE2NiwicHVyIjoiYmxvYl9pZCJ9fQ==--b2c9c848bdec841781e87d5eceeceb2512f85829/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDE2NywicHVyIjoiYmxvYl9pZCJ9fQ==--ffad318a8823fb7d73ab1648809b2eedcc5deecc/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/WIPGzqZ4R35H/timelapse-WIPGzqZ4R35H.mp4
- https://public.lapse-hackclub.link/timelapses/JsGffeZFfoMe/timelapse-JsGffeZFfoMe.mp4

## Entry 17
- ID: 1974
- Author: Jason
- Created At: 2026-04-12T23:45:17Z

### Content

This was a very short session, I just did some final last touches before submitting, such as looking over the readme and uploading the qmk json and .c files to the github repo. This is my last journal entry before I submit my project, wow. The old me would have never thought that I would eventually be able to design my own virtual keyboard, and I am very excited that it will soon become a reality! I am really proud of what I have made in the last few weeks, and I look forward to making even cooler projects in the near future. 

*Sidenote: I love how big my pokimon collection has grown lol, having them as irl cards will be so cool

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDIyMywicHVyIjoiYmxvYl9pZCJ9fQ==--f0b8365eb66927882c1ea4982f97323184654fba/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/ebOa3vUY6KMU/timelapse-ebOa3vUY6KMU.mp4

## Entry 18
- ID: 1983
- Author: Jason
- Created At: 2026-04-13T00:51:18Z

### Content

In this session, I realized that there were a few things that I needed to add to my github repository before submitting my project for review. I started by renaming some files to keep everything clean and consistent, and also wrote an assembely guide so anyone could easily replicate my project at home. I also wrote a flashing firmware guide, which is also when I realized that there was a .uf2 file that I had forgot to upload to my repository. I plan to add pictures to the guides once I build it in real life, as it can make following along with steps easier for many people. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDI0MCwicHVyIjoiYmxvYl9pZCJ9fQ==--9230ccba3d3ae0c198cef8b23e1792e8e9115c74/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/roK--JVtQm_B/timelapse-roK--JVtQm_B.mp4
- https://public.lapse-hackclub.link/timelapses/DZMawibWGse6/timelapse-DZMawibWGse6.mp4

## Entry 19
- ID: 2744
- Author: Jason
- Created At: 2026-04-18T17:28:20Z

### Content

In this session, my design was returned for changes. The issue was that the 3d files of my project appeared to be empty in the github repository. After doing some testing, I realized that the reason this happened is because I used github desktop to save the 25mb+ files to the repo, and when I tried moving them into a different folder in github online, the files broke. To fix this issue, when putting the files into my local cloned repo, I put the files directly into the correct folders. Additionally, I added a final total cost to my bom, as it is reccomended.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NTc1MiwicHVyIjoiYmxvYl9pZCJ9fQ==--61429d6df235b01ddfef2863cf5c81341bd97fe3/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/E2SYUZjwAbYv/timelapse-E2SYUZjwAbYv.mp4

## Entry 20
- ID: 4225
- Author: Jason
- Created At: 2026-04-27T15:19:55Z

### Content

In this session, my project was returned, as I needed to include the step/fusion files seperately, and include the zine page in a pdf format (I mixed up pdf and png.) I started by going into canva and downloading my zine as a pdf instead of png, however after taking a look at the pdf, I realized that it was very low quality. So, I decided to just use an online png to pdf converter, which retained most of the quality. Next, I went into github and copied my project from there, as it seemed like I somehow had an older version of my keyboard saved onto my computer, which I am still very confused about (how was that even possible??) I then seperated the project into smaller parts (the case, plate, and cover.) I did have some trouble doing this, as whenever I copied the original design, it kept opening up in the rendering section which I did not want. After doing some reaseach, I figured out that the reason this was happeneing was because the last state my original project was saved in was in the rendering section, so I made a small change and undid it in the design section, which solved the problem.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6ODc3MCwicHVyIjoiYmxvYl9pZCJ9fQ==--87d7162fafbf27cb00655a8840ecbe53bc7bfb31/image.png)


![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6ODc3NSwicHVyIjoiYmxvYl9pZCJ9fQ==--9b35491f1b50813d0b813aba78331992b22fb56e/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6ODc3NywicHVyIjoiYmxvYl9pZCJ9fQ==--ed60d972bdf455e80a7dab9bcfff40c4eb686cba/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6ODc3OCwicHVyIjoiYmxvYl9pZCJ9fQ==--94309e4e39158cd87013d15c4a6390e7672b91dc/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/vfmfN5mRxwKf/timelapse-vfmfN5mRxwKf.mp4

## Entry 21
- ID: 9241
- Author: Jason
- Created At: 2026-05-26T01:01:48Z

### Content

In this session, I did lots of soldering. I started by placing the header pins onto a breadboard to secure them, and them placing the pico ontop. Then, I began soldering the connections (pads) between the pico and the headerpins. It went pretty smoothly, however I did leave a couple burn marks on the pico. Somebody later suggested to me to hold the soldering pen horizontally when soldering the pads so it wont burn the pico, and I will try to keep that in mind for the future. After soldering the header pins, I did a simple LED blink test on the board to make sure it worked, by using the LED built into the pico. It worked, and after I used a multimeter, set to contuninity mode to ensure everything was conductive and everything was connected to the correct thing. Finally, I soldered the pico onto my pcb, as well as dioides, and connected it to my pc. I uploaded the .uf2 files, and tested the connections using tweezers to simulate keypresses, and it worked!

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjA1MTQsInB1ciI6ImJsb2JfaWQifX0=--b2e6c9e85b52e84c328893ab6ed28c4c8baabfa0/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/Sx0OaFx2JVld/timelapse-Sx0OaFx2JVld.mp4
- https://public.lapse-hackclub.link/timelapses/WPH0k4Hw90Bs/timelapse-WPH0k4Hw90Bs.mp4
- https://public.lapse-hackclub.link/timelapses/UuCtkROeyb-T/timelapse-UuCtkROeyb-T.mp4

## Entry 22
- ID: 9522
- Author: Jason
- Created At: 2026-05-27T02:59:29Z

### Content

I dont have much time right now, so I will make a more detailed journal tommorow. But in short, I just did lots of soldering (diodes)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjExNzIsInB1ciI6ImJsb2JfaWQifX0=--85dc64fcf19d369efb1c3788a1fff385c9d52ad6/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjExNzMsInB1ciI6ImJsb2JfaWQifX0=--857edb049d3687c46000749fab80a7d93eaa818e/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/NbxxlCK4S5HH/timelapse-NbxxlCK4S5HH.mp4
- https://public.lapse-hackclub.link/timelapses/7xT4GV2YZRmq/timelapse-7xT4GV2YZRmq.mp4
- https://public.lapse-hackclub.link/timelapses/YS6Wa_x8VP74/timelapse-YS6Wa_x8VP74.mp4
- https://public.lapse-hackclub.link/timelapses/O14SlC8NAgH5/timelapse-O14SlC8NAgH5.mp4

## Entry 23
- ID: 9686
- Author: Jason
- Created At: 2026-05-27T16:31:03Z

### Content

In my previous session, I realized that I was soldering the diodes on incorrectly. This is because previously, I was placing the diodes on the backside, and then soldering the connections on the front. This is wrong, because I need to place keyboard switches on the front side over the dioide pads, and if there is solder there, the switch wont lay flat. Additionally, I would have to clip the diode legs, however after testing using diagonal cutters, there is still around 1mm of the leg remaining. This is bad, because even that small amount is enough for the switch not to lay flat. I decided to solve this issue by pre-clipping the dioide legs to exactly match the length of the pcb, so when inserted, there would be no extra leg sticking out. I also decided to solder from the back instead, as the solder wont get in the way.

This meant I had to remove my previously soldered diodes, so I got a friend to hold the dioide with tweezers while I heated the solder up to loosen the connection.

I also tested all of the connections at the end by using tweezers to simulate a key press, and using a keyboard switch tester webiste, it showed all of my keys worked, even my volume knob.

Finally, I went back home and found 99% isopropol alchohol, along with a small container and cotton swabs. This is because there was lots of yellow flux residue on the keyboard after soldering, and I wanted to clean it up. I dipped the swabs in the solution and gently wiped them on the stains, and they slowly dissapeared.


![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjE1MTAsInB1ciI6ImJsb2JfaWQifX0=--9f2fe125813517a7b709c8a52b0632c514dadde3/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/QYmk7nf24n59/timelapse-QYmk7nf24n59.mp4

## Entry 24
- ID: 9816
- Author: Jason
- Created At: 2026-05-28T03:18:18Z

### Content

Again, dont have much time to write a detailed journal entry right now so I will do that tommorow. But in short, I soldered the hotswap sockets onto the pcb and they keys still work!

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjE3OTIsInB1ciI6ImJsb2JfaWQifX0=--c496b42a242bbaed0c4b5798d227c29e2fd4e0b6/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjE3OTMsInB1ciI6ImJsb2JfaWQifX0=--bbc257c52aeff312791040788b755d8705ccabf8/image.png)




### Recording Links

- https://public.lapse-hackclub.link/timelapses/2ComHY1oX1Gq/timelapse-2ComHY1oX1Gq.mp4
- https://public.lapse-hackclub.link/timelapses/c122XPvDw5hT/timelapse-c122XPvDw5hT.mp4
- https://public.lapse-hackclub.link/timelapses/a0EZAy5WMiuY/timelapse-a0EZAy5WMiuY.mp4

## Entry 25
- ID: 10018
- Author: Jason
- Created At: 2026-05-29T00:25:32Z

### Content

This is a test because I submitted an entry earlier but I guess it didnt register? hmm interesting...
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjI2MzksInB1ciI6ImJsb2JfaWQifX0=--e4afffd3e2d193ee21e0014842bf74645948793e/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/d7oh5Rnkp15W/timelapse-d7oh5Rnkp15W.mp4

## Entry 26
- ID: 10020
- Author: Jason
- Created At: 2026-05-29T00:40:41Z

### Content

In this session, I used more isopropl alchol + qtips to clean off the solder flux on my PCB. Next, I attached the 4 stabilizers to my board by screwing them in, and I added small pads where the stabs touched the board to help with noise and soften the impact. I also reattached all of the keyswitches and placed the corresponding keycaps on top. I then connected the keyboard to my laptop and tested it for a while, and played monkey type on it! I also showed it off to my family, as I am very proud of the fact I managed to create an ENTIRE KEYBOARD from scratch with no experience and no guide. Finally, I went back into fusion and did some touch ups (such as double checking measurements). I am really glad at how it turned out, and all that is left for me to do is just print the case. I will also attatch screenshots of a previous journal that did not seem to appear on fallout. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjI2NDEsInB1ciI6ImJsb2JfaWQifX0=--a62aa11ecaefeff7321625e71977bf7354d3d907/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjI2NDIsInB1ciI6ImJsb2JfaWQifX0=--69fda9fae4a78f2c49f27014bcede8ec077fb297/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjI2NDMsInB1ciI6ImJsb2JfaWQifX0=--b3033c6df1f10f106b88de48d113e3b1103e1c08/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjI2NDQsInB1ciI6ImJsb2JfaWQifX0=--107187467c0f60ac6ca955a5e97534b37be0300b/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/JIFXzcj4wsVu/timelapse-JIFXzcj4wsVu.mp4
- https://public.lapse-hackclub.link/timelapses/GckHRKjGLHt_/timelapse-GckHRKjGLHt_.mp4

## Entry 27
- ID: 10284
- Author: Jason
- Created At: 2026-05-30T00:54:00Z

### Content

In this session, I made some more small changes to my keyboard case in fusion. This is because the width of my case was around 329mm, however the max size that the printer could print was 325mm. So, I had to manually reduce the wall thickness of my case, as well as trim down my plate. While doing this, I encountered another problem, which was that my heatset inserts wouldnt have enough wall thickness to stay in place safely without cracking. As a result, I moved them closer to the middle of the keyboard, so that they would always have a 2mm wall thickness no matter what. Finally, I exported them as stl files.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjMzMTIsInB1ciI6ImJsb2JfaWQifX0=--87862b53e11a8fe0001d84f85f4e6fd3fc612b98/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjMzMTMsInB1ciI6ImJsb2JfaWQifX0=--c7fe75f05fc8eeda5ae82c9d55ce81adddf657ef/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/pgXBge6h0vf2/timelapse-pgXBge6h0vf2.mp4

## Entry 28
- ID: 11286
- Author: Jason
- Created At: 2026-06-03T03:15:16Z

### Content

Dont have much time right now, and will make a detailed jounral entry tommorow. But in short I took the keyswtiches off the pcb and connected them to my printed out plate
![IMG_5511.jpg](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjYwMDIsInB1ciI6ImJsb2JfaWQifX0=--849f845f7f49a8fd0122500969ae26e5b2db8293/IMG_5511.jpg)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/br-zAmX3IA07/timelapse-br-zAmX3IA07.mp4

## Entry 29
- ID: 12195
- Author: Jason
- Created At: 2026-06-07T03:45:47Z

### Content

In this session, I didn't do much else other than sanding. This is because I made the support beams for the keyboard around a 1 milimeter too high, so I had to use some sandpaper to sand them all down. This was a very tedious task, and theres not much else to say.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6Mjg2MzAsInB1ciI6ImJsb2JfaWQifX0=--83eea4f225adb428ae4008cfb932afe975b421e4/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/ywSnff75b-M3/timelapse-ywSnff75b-M3.mp4

## Entry 30
- ID: 14904
- Author: Jason
- Created At: 2026-06-18T01:52:55Z

### Content

In this session, I took pictures of my irl project to add to my github repository, and took a video of it as well. I sent the photos to my computer, and used canva features to remove the background + improve quality of photos. I then replaced the old photos with my irl ones, and re-used the fallout zine template to ensure that there was enough space on the edges. I then updated my github repo with these new irl photos, and also added a side by side comparison of the 3d renders with the irl photos. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzUzODYsInB1ciI6ImJsb2JfaWQifX0=--ca42f7036c259119170cf2050ce947a34d30a6c9/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzUzODcsInB1ciI6ImJsb2JfaWQifX0=--559c181086059bcd492c713a32d0de31cfe8c377/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzUzODgsInB1ciI6ImJsb2JfaWQifX0=--995d39623e6dbcdf0a69ae3ef0dba4f07cda1a23/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/7C6Xma3okvpO/timelapse-7C6Xma3okvpO.mp4
- https://public.lapse-hackclub.link/timelapses/Kv7AQJejUTWd/timelapse-Kv7AQJejUTWd.mp4
- https://public.lapse-hackclub.link/timelapses/TY0m23FmLWPl/timelapse-TY0m23FmLWPl.mp4

## Entry 31
- ID: 15457
- Author: Jason
- Created At: 2026-06-20T04:00:05Z

### Content

I will make a detailed journal in 10 mins, becasuse I dont know if I can attach a day old lapse to my journal
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzY4MzIsInB1ciI6ImJsb2JfaWQifX0=--ead529350bf8a3bafa8487aeb961f126a9732362/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/RSdL6PLHyF1b/timelapse-RSdL6PLHyF1b.mp4

## Entry 32
- ID: 15460
- Author: Jason
- Created At: 2026-06-20T04:10:10Z

### Content

In this session, I imported the recorded clips into microsoft clipchamp and began editing my youtube video of my keyboard project. This was pretty straightforward, I looked through the clips and did small cuts where neccessary, and added in cool transitions. I also added my zine in at the end of the video, as I thought it was a nice touch. Next, I recorded an audio voiceover using microsoft's sound recorder, and after a few tries I realized I needed to write a script in order to not have to think on the spot. I then recorded my voice, put it into clipchamp, and edited it in. Finally, I downloaded the video, added it to youtube, and updated my github repository to include the yt link.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzY4MzYsInB1ciI6ImJsb2JfaWQifX0=--aa9c53f31242dab925868043365aab1501233b1a/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/oPhxcjEx6pRG/timelapse-oPhxcjEx6pRG.mp4

## Entry 33
- ID: 15462
- Author: Jason
- Created At: 2026-06-20T04:16:47Z

### Content

Sidenote: My keyboard currently does not include the screws as the ones I ordered from alieexpress got lost in the mail, meaning I had request a refund and re-order them. They will unfortunatly come after the fallout submission date, so I am submitting my project without them, as the vast majority of my project is still complete

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzY4NDAsInB1ciI6ImJsb2JfaWQifX0=--515dc81730f8014e1defa41dab73455c8dd8905a/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/PtA610NMPdAJ/timelapse-PtA610NMPdAJ.mp4
