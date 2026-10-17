; undefined FUN_08117f98(void)
; entry 0x8117f98  size 72 bytes

08117F98: 70b5         push {r4,r5,r6,lr}
08117F9A: 051c         add r5,r0,#0x0
08117F9C: 1048         ldr r0,[0x08117fe0]
08117F9E: 2918         add r1,r5,r0
08117FA0: f020         mov r0,#0xf0
08117FA2: c001         lsl r0,r0,#0x7
08117FA4: 0860         str r0,[r1,#0x0]
08117FA6: a020         mov r0,#0xa0
08117FA8: c001         lsl r0,r0,#0x7
08117FAA: 4860         str r0,[r1,#0x4]
08117FAC: 0d48         ldr r0,[0x08117fe4]
08117FAE: 2e18         add r6,r5,r0
08117FB0: 301c         add r0,r6,#0x0
08117FB2: 0022         mov r2,#0x0
08117FB4: 0023         mov r3,#0x0
08117FB6: eaf629fe     bl 0x08002c0c
08117FBA: 0b48         ldr r0,[0x08117fe8]
08117FBC: 2c18         add r4,r5,r0
08117FBE: 201c         add r0,r4,#0x0
08117FC0: ebf6e0f9     bl 0x08003384
08117FC4: 201c         add r0,r4,#0x0
08117FC6: 311c         add r1,r6,#0x0
08117FC8: ebf6f8f9     bl 0x080033bc
08117FCC: 0748         ldr r0,[0x08117fec]
08117FCE: 2d18         add r5,r5,r0
08117FD0: 0749         ldr r1,[0x08117ff0]
08117FD2: 281c         add r0,r5,#0x0
08117FD4: 4022         mov r2,#0x40
08117FD6: f2f7edf8     bl 0x0810a1b4
08117FDA: 70bc         pop {r4,r5,r6}
08117FDC: 01bc         pop {r0}
08117FDE: 0047         bx r0
