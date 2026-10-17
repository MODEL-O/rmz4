; undefined FUN_08106304(void)
; entry 0x8106304  size 28 bytes

08106304: 30b5         push {r4,r5,lr}
08106306: 051c         add r5,r0,#0x0
08106308: 687b         ldrb r0,[r5,#0xd]
0810630A: 0a28         cmp r0,#0xa
0810630C: 00d9         bls 0x08106310
0810630E: 5ae1         b 0x081065c6
08106310: 8000         lsl r0,r0,#0x2
08106312: 0249         ldr r1,[0x0810631c]
08106314: 4018         add r0,r0,r1
08106316: 0068         ldr r0,[r0,#0x0]
08106318: 8746         mov pc,r0
081065C6: 30bc         pop {r4,r5}
081065C8: 01bc         pop {r0}
081065CA: 0047         bx r0
