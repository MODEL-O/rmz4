; undefined FUN_0809e968(void)
; entry 0x809e968  size 42 bytes

0809E968: 00b5         push {lr}
0809E96A: 021c         add r2,r0,#0x0
0809E96C: 506d         ldr r0,[r2,#0x54]
0809E96E: d16d         ldr r1,[r2,#0x5c]
0809E970: 4018         add r0,r0,r1
0809E972: 5065         str r0,[r2,#0x54]
0809E974: 0b1c         add r3,r1,#0x0
0809E976: 0029         cmp r1,#0x0
0809E978: 00da         bge 0x0809e97c
0809E97A: 4b42         rsb r3,r1
0809E97C: 0548         ldr r0,[0x0809e994]
0809E97E: 8342         cmp r3,r0
0809E980: 02dc         bgt 0x0809e988
0809E982: 506e         ldr r0,[r2,#0x64]
0809E984: 0818         add r0,r1,r0
0809E986: d065         str r0,[r2,#0x5c]
0809E988: 101c         add r0,r2,#0x0
0809E98A: 7ef731fb     bl 0x0801cff0
0809E98E: 01bc         pop {r0}
0809E990: 0047         bx r0
