; undefined FUN_080ff168(void)
; entry 0x80ff168  size 56 bytes

080FF168: f0b5         push {r4,r5,r6,r7,lr}
080FF16A: 051c         add r5,r0,#0x0
080FF16C: 287c         ldrb r0,[r5,#0x10]
080FF16E: 0428         cmp r0,#0x4
080FF170: 42d1         bne 0x080ff1f8
080FF172: 2f1c         add r7,r5,#0x0
080FF174: 5437         add r7,#0x54
080FF176: 0a48         ldr r0,[0x080ff1a0]
080FF178: 8446         mov r12,r0
080FF17A: a97a         ldrb r1,[r5,#0xa]
080FF17C: 2022         mov r2,#0x20
080FF17E: 101c         add r0,r2,#0x0
080FF180: 0840         and r0,r1
080FF182: 0006         lsl r0,r0,#0x18
080FF184: 000e         lsr r0,r0,#0x18
080FF186: 4042         rsb r0,r0
080FF188: c317         asr r3,r0,#0x1f
080FF18A: 1340         and r3,r2
080FF18C: 0548         ldr r0,[0x080ff1a4]
080FF18E: 0068         ldr r0,[r0,#0x0]
080FF190: 696d         ldr r1,[r5,#0x54]
080FF192: 406d         ldr r0,[r0,#0x54]
080FF194: 3e1c         add r6,r7,#0x0
080FF196: 8142         cmp r1,r0
080FF198: 06db         blt 0x080ff1a8
080FF19A: 0124         mov r4,#0x1
080FF19C: 1c43         orr r4,r3
080FF19E: 05e0         b 0x080ff1ac
