; undefined FUN_08009278(void)
; entry 0x8009278  size 30 bytes

08009278: 00b5         push {lr}
0800927A: 021c         add r2,r0,#0x0
0800927C: 0448         ldr r0,[0x08009290]
0800927E: 8242         cmp r2,r0
08009280: 0add         ble 0x08009298
08009282: 044b         ldr r3,[0x08009294]
08009284: d018         add r0,r2,r3
08009286: 4000         lsl r0,r0,#0x1
08009288: 8142         cmp r1,r0
0800928A: 05da         bge 0x08009298
0800928C: c843         mvn r0,r1
0800928E: 04e0         b 0x0800929a
08009298: 0020         mov r0,#0x0
0800929A: 02bc         pop {r1}
0800929C: 0847         bx r1
