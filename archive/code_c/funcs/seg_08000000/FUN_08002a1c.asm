; undefined FUN_08002a1c(void)
; entry 0x8002a1c  size 40 bytes

08002A1C: 30b5         push {r4,r5,lr}
08002A1E: 0948         ldr r0,[0x08002a44]
08002A20: 0004         lsl r0,r0,#0x10
08002A22: 000c         lsr r0,r0,#0x10
08002A24: 0028         cmp r0,#0x0
08002A26: 0ad0         beq 0x08002a3e
08002A28: 074d         ldr r5,[0x08002a48]
08002A2A: 041c         add r4,r0,#0x0
08002A2C: 2868         ldr r0,[r5,#0x0]
08002A2E: 0749         ldr r1,[0x08002a4c]
08002A30: 6022         mov r2,#0x60
08002A32: 25f16ffe     bl 0x08128714
08002A36: 0c35         add r5,#0xc
08002A38: 013c         sub r4,#0x1
08002A3A: 002c         cmp r4,#0x0
08002A3C: f6d1         bne 0x08002a2c
08002A3E: 30bc         pop {r4,r5}
08002A40: 01bc         pop {r0}
08002A42: 0047         bx r0
