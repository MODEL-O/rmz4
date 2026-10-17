; undefined FUN_0804e878(void)
; entry 0x804e878  size 40 bytes

0804E878: 10b5         push {r4,lr}
0804E87A: 041c         add r4,r0,#0x0
0804E87C: bd30         add r0,#0xbd
0804E87E: 0078         ldrb r0,[r0,#0x0]
0804E880: 0028         cmp r0,#0x0
0804E882: 07d0         beq 0x0804e894
0804E884: 211c         add r1,r4,#0x0
0804E886: 5431         add r1,#0x54
0804E888: 0120         mov r0,#0x1
0804E88A: 82f0fdf9     bl 0x080d0c88
0804E88E: 3520         mov r0,#0x35
0804E890: b4f73ef9     bl 0x08002b10
0804E894: 201c         add r0,r4,#0x0
0804E896: ecf70df8     bl 0x0803a8b4
0804E89A: 10bc         pop {r4}
0804E89C: 01bc         pop {r0}
0804E89E: 0047         bx r0
