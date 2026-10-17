; undefined FUN_080d91ac(void)
; entry 0x80d91ac  size 60 bytes

080D91AC: 00b5         push {lr}
080D91AE: 031c         add r3,r0,#0x0
080D91B0: 997a         ldrb r1,[r3,#0xa]
080D91B2: 1020         mov r0,#0x10
080D91B4: 0840         and r0,r1
080D91B6: 0028         cmp r0,#0x0
080D91B8: 02d0         beq 0x080d91c0
080D91BA: c020         mov r0,#0xc0
080D91BC: 4042         rsb r0,r0
080D91BE: 00e0         b 0x080d91c2
080D91C0: c020         mov r0,#0xc0
080D91C2: d865         str r0,[r3,#0x5c]
080D91C4: 0020         mov r0,#0x0
080D91C6: 1866         str r0,[r3,#0x60]
080D91C8: 074a         ldr r2,[0x080d91e8]
080D91CA: 1168         ldr r1,[r2,#0x0]
080D91CC: 0748         ldr r0,[0x080d91ec]
080D91CE: 4843         mul r0,r1
080D91D0: 0749         ldr r1,[0x080d91f0]
080D91D2: 4018         add r0,r0,r1
080D91D4: 4000         lsl r0,r0,#0x1
080D91D6: 4108         lsr r1,r0,#0x1
080D91D8: 1160         str r1,[r2,#0x0]
080D91DA: 400c         lsr r0,r0,#0x11
080D91DC: 0721         mov r1,#0x7
080D91DE: 0840         and r0,r1
080D91E0: 4c30         add r0,#0x4c
080D91E2: 9874         strb r0,[r3,#0x12]
080D91E4: 01bc         pop {r0}
080D91E6: 0047         bx r0
