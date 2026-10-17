; undefined FUN_0805f668(void)
; entry 0x805f668  size 74 bytes

0805F668: 10b5         push {r4,lr}
0805F66A: 041c         add r4,r0,#0x0
0805F66C: a07b         ldrb r0,[r4,#0xe]
0805F66E: 0028         cmp r0,#0x0
0805F670: 08d1         bne 0x0805f684
0805F672: 1049         ldr r1,[0x0805f6b4]
0805F674: 201c         add r0,r4,#0x0
0805F676: bdf743fc     bl 0x0801cf00
0805F67A: 0220         mov r0,#0x2
0805F67C: e073         strb r0,[r4,#0xf]
0805F67E: a07b         ldrb r0,[r4,#0xe]
0805F680: 0130         add r0,#0x1
0805F682: a073         strb r0,[r4,#0xe]
0805F684: e07b         ldrb r0,[r4,#0xf]
0805F686: 0028         cmp r0,#0x0
0805F688: 0ddb         blt 0x0805f6a6
0805F68A: 0128         cmp r0,#0x1
0805F68C: 0bdd         ble 0x0805f6a6
0805F68E: 0228         cmp r0,#0x2
0805F690: 09d1         bne 0x0805f6a6
0805F692: a069         ldr r0,[r4,#0x18]
0805F694: 417a         ldrb r1,[r0,#0x9]
0805F696: 0122         mov r2,#0x1
0805F698: 101c         add r0,r2,#0x0
0805F69A: 0840         and r0,r1
0805F69C: 0028         cmp r0,#0x0
0805F69E: 02d0         beq 0x0805f6a6
0805F6A0: 0020         mov r0,#0x0
0805F6A2: 6273         strb r2,[r4,#0xd]
0805F6A4: a073         strb r0,[r4,#0xe]
0805F6A6: 201c         add r0,r4,#0x0
0805F6A8: bdf7a2fc     bl 0x0801cff0
0805F6AC: 10bc         pop {r4}
0805F6AE: 01bc         pop {r0}
0805F6B0: 0047         bx r0
