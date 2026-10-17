// undefined FUN_08074588(void)
// entry 0x8074588


undefined4 FUN_08074588(int param_1)

{
  short sVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != -0x6d00) {
      FUN_0801cf00(param_1);
    }
    *(undefined2 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  pbVar2 = (byte *)(param_1 + 0xe0);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + *(short *)((uint)*pbVar2 * 2 + DAT_08074644) * 4;
  *pbVar2 = *pbVar2 + 1;
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 200) + *(short *)(param_1 + 0xc4);
  *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xca) + *(short *)(param_1 + 0xc6);
  sVar1 = *(short *)(param_1 + 200) + 0x80;
  *(short *)(param_1 + 200) = sVar1;
  *(short *)(param_1 + 0xca) = *(short *)(param_1 + 0xca) + 0x80;
  if (0x200 < sVar1) {
    *(undefined2 *)(param_1 + 200) = 0x200;
    *(undefined2 *)(param_1 + 0xca) = 0x200;
  }
  sVar1 = *(short *)(param_1 + 0xc0) + 0x80;
  *(short *)(param_1 + 0xc0) = sVar1;
  *(short *)(param_1 + 0xc2) = *(short *)(param_1 + 0xc2) + 0x80;
  if (0x3000 < sVar1) {
    *(undefined2 *)(param_1 + 0xc0) = 0x3000;
    *(undefined2 *)(param_1 + 0xc2) = 0x3000;
  }
  if ((*(byte *)(DAT_08074648 + 0x12) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


