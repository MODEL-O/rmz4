; undefined FUN_0804a640(void)
; entry 0x804a640  size 40 bytes

0804A640: 10b5         push {r4,lr}
0804A642: 041c         add r4,r0,#0x0
0804A644: be30         add r0,#0xbe
0804A646: 0078         ldrb r0,[r0,#0x0]
0804A648: 0028         cmp r0,#0x0
0804A64A: 07d0         beq 0x0804a65c
0804A64C: 211c         add r1,r4,#0x0
0804A64E: 5431         add r1,#0x54
0804A650: 0120         mov r0,#0x1
0804A652: 86f019fb     bl 0x080d0c88
0804A656: 3520         mov r0,#0x35
0804A658: b8f75afa     bl 0x08002b10
0804A65C: 201c         add r0,r4,#0x0
0804A65E: f0f729f9     bl 0x0803a8b4
0804A662: 10bc         pop {r4}
0804A664: 01bc         pop {r0}
0804A666: 0047         bx r0
