; undefined FUN_0802b63c(void)
; entry 0x802b63c  size 48 bytes

0802B63C: 30b5         push {r4,r5,lr}
0802B63E: 0904         lsl r1,r1,#0x10
0802B640: 090c         lsr r1,r1,#0x10
0802B642: 041c         add r4,r0,#0x0
0802B644: b434         add r4,#0xb4
0802B646: e088         ldrh r0,[r4,#0x6]
0802B648: 064d         ldr r5,[0x0802b664]
0802B64A: a842         cmp r0,r5
0802B64C: 0dd8         bhi 0x0802b66a
0802B64E: 0818         add r0,r1,r0
0802B650: e080         strh r0,[r4,#0x6]
0802B652: 2220         mov r0,#0x22
0802B654: d7f75cfa     bl 0x08002b10
0802B658: e088         ldrh r0,[r4,#0x6]
0802B65A: a842         cmp r0,r5
0802B65C: 04d8         bhi 0x0802b668
0802B65E: 0120         mov r0,#0x1
0802B660: 04e0         b 0x0802b66c
0802B668: e580         strh r5,[r4,#0x6]
0802B66A: 0020         mov r0,#0x0
0802B66C: 30bc         pop {r4,r5}
0802B66E: 02bc         pop {r1}
0802B670: 0847         bx r1
