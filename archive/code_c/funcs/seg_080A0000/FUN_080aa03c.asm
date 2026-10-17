; undefined FUN_080aa03c(void)
; entry 0x80aa03c  size 40 bytes

080AA03C: 10b5         push {r4,lr}
080AA03E: 041c         add r4,r0,#0x0
080AA040: fff716fd     bl 0x080a9a70
080AA044: 0006         lsl r0,r0,#0x18
080AA046: 0028         cmp r0,#0x0
080AA048: 06d1         bne 0x080aa058
080AA04A: a06d         ldr r0,[r4,#0x58]
080AA04C: 216e         ldr r1,[r4,#0x60]
080AA04E: 4018         add r0,r0,r1
080AA050: a065         str r0,[r4,#0x58]
080AA052: 4031         add r1,#0x40
080AA054: 2166         str r1,[r4,#0x60]
080AA056: 02e0         b 0x080aa05e
080AA058: a06d         ldr r0,[r4,#0x58]
080AA05A: 5030         add r0,#0x50
080AA05C: a065         str r0,[r4,#0x58]
080AA05E: 10bc         pop {r4}
080AA060: 01bc         pop {r0}
080AA062: 0047         bx r0
