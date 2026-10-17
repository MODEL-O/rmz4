; undefined FUN_080aa0ec(void)
; entry 0x80aa0ec  size 54 bytes

080AA0EC: 70b5         push {r4,r5,r6,lr}
080AA0EE: 051c         add r5,r0,#0x0
080AA0F0: 2e1c         add r6,r5,#0x0
080AA0F2: c036         add r6,#0xc0
080AA0F4: 3068         ldr r0,[r6,#0x0]
080AA0F6: 81f775f9     bl 0x0802b3e4
080AA0FA: 0028         cmp r0,#0x0
080AA0FC: 0ed0         beq 0x080aa11c
080AA0FE: 281c         add r0,r5,#0x0
080AA100: 7430         add r0,#0x74
080AA102: 0849         ldr r1,[0x080aa124]
080AA104: 5bf73efb     bl 0x08005784
080AA108: 0024         mov r4,#0x0
080AA10A: 3460         str r4,[r6,#0x0]
080AA10C: 686d         ldr r0,[r5,#0x54]
080AA10E: a96d         ldr r1,[r5,#0x58]
080AA110: 5ef710fa     bl 0x08008534
080AA114: a865         str r0,[r5,#0x58]
080AA116: 0420         mov r0,#0x4
080AA118: 6873         strb r0,[r5,#0xd]
080AA11A: ac73         strb r4,[r5,#0xe]
080AA11C: 70bc         pop {r4,r5,r6}
080AA11E: 01bc         pop {r0}
080AA120: 0047         bx r0
