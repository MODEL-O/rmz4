; undefined FUN_080c354c(void)
; entry 0x80c354c  size 64 bytes

080C354C: 00b5         push {lr}
080C354E: 021c         add r2,r0,#0x0
080C3550: 8c30         add r0,#0x8c
080C3552: 0068         ldr r0,[r0,#0x0]
080C3554: 8021         mov r1,#0x80
080C3556: 8900         lsl r1,r1,#0x2
080C3558: 0840         and r0,r1
080C355A: 0028         cmp r0,#0x0
080C355C: 0ed0         beq 0x080c357c
080C355E: 0649         ldr r1,[0x080c3578]
080C3560: 507a         ldrb r0,[r2,#0x9]
080C3562: 8000         lsl r0,r0,#0x2
080C3564: 4018         add r0,r0,r1
080C3566: 0221         mov r1,#0x2
080C3568: d160         str r1,[r2,#0xc]
080C356A: 0068         ldr r0,[r0,#0x0]
080C356C: 8068         ldr r0,[r0,#0x8]
080C356E: 5061         str r0,[r2,#0x14]
080C3570: 101c         add r0,r2,#0x0
080C3572: 00f00ff8     bl 0x080c3594
080C3576: 09e0         b 0x080c358c
080C357C: 0448         ldr r0,[0x080c3590]
080C357E: 117c         ldrb r1,[r2,#0x10]
080C3580: 8900         lsl r1,r1,#0x2
080C3582: 0918         add r1,r1,r0
080C3584: 0968         ldr r1,[r1,#0x0]
080C3586: 101c         add r0,r2,#0x0
080C3588: 65f0fafc     bl 0x08128f80
080C358C: 01bc         pop {r0}
080C358E: 0047         bx r0
