// undefined FUN_080f8088(void)
// entry 0x80f8088


undefined4 FUN_080f8088(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  pbVar4 = DAT_080f80d4;
  if (*(char *)(param_1 + 0x11) == '\0') {
    pbVar4 = DAT_080f80d4 + -1;
  }
  bVar1 = *pbVar4;
  pbVar3 = (byte *)(param_1 + 0xb4);
  if ((*pbVar3 == 0) || (bVar1 == *pbVar3)) {
    cVar2 = FUN_08129198(bVar1,3);
    if (cVar2 == '\0') {
      if ((*pbVar3 == 0) && (2 < bVar1)) {
        if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
          *(uint *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined1 *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          FUN_0801cf00(param_1,DAT_080f8144);
          cVar2 = FUN_08129120(bVar1,3);
          bVar1 = cVar2 * '\x03' - 2;
          *pbVar3 = bVar1;
          *pbVar4 = bVar1;
        }
      }
    }
  }
  else {
    *pbVar3 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080f80d8,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_0801cf00(param_1,DAT_080f80dc);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


