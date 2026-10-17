; undefined FUN_08112684(void)
; entry 0x8112684  size 32 bytes

08112684: 30b5         push {r4,r5,lr}
08112686: eef6d3fe     bl 0x08001430
0811268A: 064d         ldr r5,[0x081126a4]
0811268C: 064c         ldr r4,[0x081126a8]
0811268E: 2078         ldrb r0,[r4,#0x0]
08112690: 8000         lsl r0,r0,#0x2
08112692: 4019         add r0,r0,r5
08112694: 0168         ldr r1,[r0,#0x0]
08112696: 201c         add r0,r4,#0x0
08112698: 16f072fc     bl 0x08128f80
0811269C: 0120         mov r0,#0x1
0811269E: eef625fe     bl 0x080012ec
081126A2: f4e7         b 0x0811268e
