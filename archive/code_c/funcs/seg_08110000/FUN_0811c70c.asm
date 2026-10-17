; undefined FUN_0811c70c(void)
; entry 0x811c70c  size 72 bytes

0811C70C: 70b5         push {r4,r5,r6,lr}
0811C70E: 051c         add r5,r0,#0x0
0811C710: 1048         ldr r0,[0x0811c754]
0811C712: 2918         add r1,r5,r0
0811C714: f020         mov r0,#0xf0
0811C716: c001         lsl r0,r0,#0x7
0811C718: 0860         str r0,[r1,#0x0]
0811C71A: a020         mov r0,#0xa0
0811C71C: c001         lsl r0,r0,#0x7
0811C71E: 4860         str r0,[r1,#0x4]
0811C720: 0d48         ldr r0,[0x0811c758]
0811C722: 2e18         add r6,r5,r0
0811C724: 301c         add r0,r6,#0x0
0811C726: 0022         mov r2,#0x0
0811C728: 0023         mov r3,#0x0
0811C72A: e6f66ffa     bl 0x08002c0c
0811C72E: 0b48         ldr r0,[0x0811c75c]
0811C730: 2c18         add r4,r5,r0
0811C732: 201c         add r0,r4,#0x0
0811C734: e6f626fe     bl 0x08003384
0811C738: 201c         add r0,r4,#0x0
0811C73A: 311c         add r1,r6,#0x0
0811C73C: e6f63efe     bl 0x080033bc
0811C740: 0748         ldr r0,[0x0811c760]
0811C742: 2d18         add r5,r5,r0
0811C744: 0749         ldr r1,[0x0811c764]
0811C746: 281c         add r0,r5,#0x0
0811C748: 4022         mov r2,#0x40
0811C74A: edf733fd     bl 0x0810a1b4
0811C74E: 70bc         pop {r4,r5,r6}
0811C750: 01bc         pop {r0}
0811C752: 0047         bx r0
