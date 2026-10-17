; undefined FUN_080113c4(void)
; entry 0x80113c4  size 42 bytes

080113C4: 00b5         push {lr}
080113C6: 031c         add r3,r0,#0x0
080113C8: 987b         ldrb r0,[r3,#0xe]
080113CA: 0028         cmp r0,#0x0
080113CC: 0dd1         bne 0x080113ea
080113CE: d96d         ldr r1,[r3,#0x5c]
080113D0: 0909         lsr r1,r1,#0x4
080113D2: 4900         lsl r1,r1,#0x1
080113D4: 0648         ldr r0,[0x080113f0]
080113D6: 0918         add r1,r1,r0
080113D8: 0a88         ldrh r2,[r1,#0x0]
080113DA: 0648         ldr r0,[0x080113f4]
080113DC: 1040         and r0,r2
080113DE: 0322         mov r2,#0x3
080113E0: 1043         orr r0,r2
080113E2: 0880         strh r0,[r1,#0x0]
080113E4: 987b         ldrb r0,[r3,#0xe]
080113E6: 0130         add r0,#0x1
080113E8: 9873         strb r0,[r3,#0xe]
080113EA: 01bc         pop {r0}
080113EC: 0047         bx r0
