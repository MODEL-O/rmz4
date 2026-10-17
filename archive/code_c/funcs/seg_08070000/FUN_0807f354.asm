; undefined FUN_0807f354(void)
; entry 0x807f354  size 74 bytes

0807F354: 10b5         push {r4,lr}
0807F356: 041c         add r4,r0,#0x0
0807F358: a07b         ldrb r0,[r4,#0xe]
0807F35A: 0028         cmp r0,#0x0
0807F35C: 0ed1         bne 0x0807f37c
0807F35E: c821         mov r1,#0xc8
0807F360: 0902         lsl r1,r1,#0x8
0807F362: 201c         add r0,r4,#0x0
0807F364: 9df7ccfd     bl 0x0801cf00
0807F368: 201c         add r0,r4,#0x0
0807F36A: 7430         add r0,#0x74
0807F36C: 0c49         ldr r1,[0x0807f3a0]
0807F36E: 86f709fa     bl 0x08005784
0807F372: 1020         mov r0,#0x10
0807F374: a074         strb r0,[r4,#0x12]
0807F376: a07b         ldrb r0,[r4,#0xe]
0807F378: 0130         add r0,#0x1
0807F37A: a073         strb r0,[r4,#0xe]
0807F37C: 201c         add r0,r4,#0x0
0807F37E: 9df737fe     bl 0x0801cff0
0807F382: a07c         ldrb r0,[r4,#0x12]
0807F384: 0138         sub r0,#0x1
0807F386: a074         strb r0,[r4,#0x12]
0807F388: 0006         lsl r0,r0,#0x18
0807F38A: 000e         lsr r0,r0,#0x18
0807F38C: ff28         cmp r0,#0xff
0807F38E: 03d1         bne 0x0807f398
0807F390: 0220         mov r0,#0x2
0807F392: 6073         strb r0,[r4,#0xd]
0807F394: 0020         mov r0,#0x0
0807F396: a073         strb r0,[r4,#0xe]
0807F398: 10bc         pop {r4}
0807F39A: 01bc         pop {r0}
0807F39C: 0047         bx r0
