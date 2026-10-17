; undefined FUN_080a8518(void)
; entry 0x80a8518  size 48 bytes

080A8518: f0b5         push {r4,r5,r6,r7,lr}
080A851A: 4746         mov r7,r8
080A851C: 80b4         push {r7}
080A851E: 83b0         sub sp,#0xc
080A8520: 071c         add r7,r0,#0x0
080A8522: bc6a         ldr r4,[r7,#0x28]
080A8524: b87b         ldrb r0,[r7,#0xe]
080A8526: 0528         cmp r0,#0x5
080A8528: 00d9         bls 0x080a852c
080A852A: 70e1         b 0x080a880e
080A852C: 8000         lsl r0,r0,#0x2
080A852E: 0249         ldr r1,[0x080a8538]
080A8530: 4018         add r0,r0,r1
080A8532: 0068         ldr r0,[r0,#0x0]
080A8534: 8746         mov pc,r0
080A880E: 381c         add r0,r7,#0x0
080A8810: 74f7eefb     bl 0x0801cff0
080A8814: 03b0         add sp,#0xc
080A8816: 08bc         pop {r3}
080A8818: 9846         mov r8,r3
080A881A: f0bc         pop {r4,r5,r6,r7}
080A881C: 01bc         pop {r0}
080A881E: 0047         bx r0
