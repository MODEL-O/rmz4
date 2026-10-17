; undefined FUN_0811ea20(void)
; entry 0x811ea20  size 60 bytes

0811EA20: 10b5         push {r4,lr}
0811EA22: 041c         add r4,r0,#0x0
0811EA24: 3f20         mov r0,#0x3f
0811EA26: e3f6fdfd     bl 0x08002624
0811EA2A: 4020         mov r0,#0x40
0811EA2C: e3f6fafd     bl 0x08002624
0811EA30: 0748         ldr r0,[0x0811ea50]
0811EA32: 2118         add r1,r4,r0
0811EA34: 0022         mov r2,#0x0
0811EA36: 0220         mov r0,#0x2
0811EA38: 4871         strb r0,[r1,#0x5]
0811EA3A: 0648         ldr r0,[0x0811ea54]
0811EA3C: 0280         strh r2,[r0,#0x0]
0811EA3E: c879         ldrb r0,[r1,#0x7]
0811EA40: 0128         cmp r0,#0x1
0811EA42: 0bd1         bne 0x0811ea5c
0811EA44: 0449         ldr r1,[0x0811ea58]
0811EA46: 201c         add r0,r4,#0x0
0811EA48: f3f730fe     bl 0x081126ac
0811EA4C: 0ae0         b 0x0811ea64
0811EA5C: 0349         ldr r1,[0x0811ea6c]
0811EA5E: 201c         add r0,r4,#0x0
0811EA60: f3f724fe     bl 0x081126ac
0811EA64: 10bc         pop {r4}
0811EA66: 01bc         pop {r0}
0811EA68: 0047         bx r0
