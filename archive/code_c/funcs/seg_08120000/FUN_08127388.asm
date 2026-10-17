; undefined FUN_08127388(void)
; entry 0x8127388  size 62 bytes

08127388: 70b5         push {r4,r5,r6,lr}
0812738A: 0d1c         add r5,r1,#0x0
0812738C: 2978         ldrb r1,[r5,#0x0]
0812738E: 8020         mov r0,#0x80
08127390: 0842         tst r0,r1
08127392: 15d0         beq 0x081273c0
08127394: 2c6a         ldr r4,[r5,#0x20]
08127396: 002c         cmp r4,#0x0
08127398: 11d0         beq 0x081273be
0812739A: 0026         mov r6,#0x0
0812739C: 2078         ldrb r0,[r4,#0x0]
0812739E: 0028         cmp r0,#0x0
081273A0: 09d0         beq 0x081273b6
081273A2: 6078         ldrb r0,[r4,#0x1]
081273A4: 0723         mov r3,#0x7
081273A6: 1840         and r0,r3
081273A8: 04d0         beq 0x081273b4
081273AA: 074b         ldr r3,[0x081273c8]
081273AC: 1b68         ldr r3,[r3,#0x0]
081273AE: db6a         ldr r3,[r3,#0x2c]
081273B0: fff7e2ff     bl 0x08127378
081273B4: 2670         strb r6,[r4,#0x0]
081273B6: e662         str r6,[r4,#0x2c]
081273B8: 646b         ldr r4,[r4,#0x34]
081273BA: 002c         cmp r4,#0x0
081273BC: eed1         bne 0x0812739c
081273BE: 2c62         str r4,[r5,#0x20]
081273C0: 70bc         pop {r4,r5,r6}
081273C2: 01bc         pop {r0}
081273C4: 0047         bx r0
