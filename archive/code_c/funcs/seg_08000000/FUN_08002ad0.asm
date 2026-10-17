; undefined FUN_08002ad0(void)
; entry 0x8002ad0  size 54 bytes

08002AD0: 00b5         push {lr}
08002AD2: 0004         lsl r0,r0,#0x10
08002AD4: 0a4b         ldr r3,[0x08002b00]
08002AD6: 0b49         ldr r1,[0x08002b04]
08002AD8: 400b         lsr r0,r0,#0xd
08002ADA: 4018         add r0,r0,r1
08002ADC: 8288         ldrh r2,[r0,#0x4]
08002ADE: 5100         lsl r1,r2,#0x1
08002AE0: 8918         add r1,r1,r2
08002AE2: 8900         lsl r1,r1,#0x2
08002AE4: c918         add r1,r1,r3
08002AE6: 0a68         ldr r2,[r1,#0x0]
08002AE8: 1168         ldr r1,[r2,#0x0]
08002AEA: 0068         ldr r0,[r0,#0x0]
08002AEC: 8142         cmp r1,r0
08002AEE: 0bd1         bne 0x08002b08
08002AF0: 5168         ldr r1,[r2,#0x4]
08002AF2: 9088         ldrh r0,[r2,#0x4]
08002AF4: 0028         cmp r0,#0x0
08002AF6: 07d0         beq 0x08002b08
08002AF8: 0029         cmp r1,#0x0
08002AFA: 05db         blt 0x08002b08
08002AFC: 0120         mov r0,#0x1
08002AFE: 04e0         b 0x08002b0a
08002B08: 0020         mov r0,#0x0
08002B0A: 02bc         pop {r1}
08002B0C: 0847         bx r1
