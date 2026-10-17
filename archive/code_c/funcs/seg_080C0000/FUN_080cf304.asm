; undefined FUN_080cf304(void)
; entry 0x80cf304  size 74 bytes

080CF304: 10b5         push {r4,lr}
080CF306: 041c         add r4,r0,#0x0
080CF308: 606d         ldr r0,[r4,#0x54]
080CF30A: e16d         ldr r1,[r4,#0x5c]
080CF30C: 4018         add r0,r0,r1
080CF30E: 6065         str r0,[r4,#0x54]
080CF310: a16d         ldr r1,[r4,#0x58]
080CF312: 226e         ldr r2,[r4,#0x60]
080CF314: 8918         add r1,r1,r2
080CF316: a165         str r1,[r4,#0x58]
080CF318: 4032         add r2,#0x40
080CF31A: 2266         str r2,[r4,#0x60]
080CF31C: 38f7aefc     bl 0x08007c7c
080CF320: 0004         lsl r0,r0,#0x10
080CF322: 0028         cmp r0,#0x0
080CF324: 0dd0         beq 0x080cf342
080CF326: 211c         add r1,r4,#0x0
080CF328: 5431         add r1,#0x54
080CF32A: 0320         mov r0,#0x3
080CF32C: 01f0acfc     bl 0x080d0c88
080CF330: 0749         ldr r1,[0x080cf350]
080CF332: 607a         ldrb r0,[r4,#0x9]
080CF334: 8000         lsl r0,r0,#0x2
080CF336: 4018         add r0,r0,r1
080CF338: 0221         mov r1,#0x2
080CF33A: e160         str r1,[r4,#0xc]
080CF33C: 0068         ldr r0,[r0,#0x0]
080CF33E: 8068         ldr r0,[r0,#0x8]
080CF340: 6061         str r0,[r4,#0x14]
080CF342: 201c         add r0,r4,#0x0
080CF344: 4df754fe     bl 0x0801cff0
080CF348: 10bc         pop {r4}
080CF34A: 01bc         pop {r0}
080CF34C: 0047         bx r0
