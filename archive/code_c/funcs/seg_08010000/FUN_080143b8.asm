; undefined FUN_080143b8(void)
; entry 0x80143b8  size 58 bytes

080143B8: 00b5         push {lr}
080143BA: 031c         add r3,r0,#0x0
080143BC: 987b         ldrb r0,[r3,#0xe]
080143BE: 0028         cmp r0,#0x0
080143C0: 15d1         bne 0x080143ee
080143C2: 0c49         ldr r1,[0x080143f4]
080143C4: 0c48         ldr r0,[0x080143f8]
080143C6: 0880         strh r0,[r1,#0x0]
080143C8: 0c48         ldr r0,[0x080143fc]
080143CA: 4880         strh r0,[r1,#0x2]
080143CC: 0c48         ldr r0,[0x08014400]
080143CE: 0d49         ldr r1,[0x08014404]
080143D0: 4018         add r0,r0,r1
080143D2: 0178         ldrb r1,[r0,#0x0]
080143D4: 0f20         mov r0,#0xf
080143D6: 0840         and r0,r1
080143D8: 0228         cmp r0,#0x2
080143DA: 05d1         bne 0x080143e8
080143DC: 0a4a         ldr r2,[0x08014408]
080143DE: d96d         ldr r1,[r3,#0x5c]
080143E0: 0902         lsl r1,r1,#0x8
080143E2: 1088         ldrh r0,[r2,#0x0]
080143E4: 8843         bic r0,r1
080143E6: 1080         strh r0,[r2,#0x0]
080143E8: 987b         ldrb r0,[r3,#0xe]
080143EA: 0130         add r0,#0x1
080143EC: 9873         strb r0,[r3,#0xe]
080143EE: 01bc         pop {r0}
080143F0: 0047         bx r0
