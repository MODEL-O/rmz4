// undefined FUN_081025a0(void)
// entry 0x81025a0


undefined4 FUN_081025a0(int param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08102600)
                        );
    *(undefined2 *)(param_1 + 0xbc) = uVar4;
    FUN_0810e518(*(undefined2 *)(param_1 + 0xbc));
    FUN_0801cf00(param_1,*(undefined2 *)(param_1 + 0xc2));
    if (*(char *)(param_1 + 0xb9) != '\0') {
      bVar2 = *(byte *)(param_1 + 10);
      bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_08102604 + 0x54);
      if (bVar1) {
        bVar3 = bVar2 | 0x10;
      }
      else {
        bVar3 = bVar2 & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(bool *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if ((bVar2 >> 4 & 1) != (*(byte *)(param_1 + 10) >> 4 & 1)) {
        iVar5 = *(int *)(param_1 + 0x5c) * -0x100;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        *(int *)(param_1 + 0x5c) = iVar5 >> 8;
      }
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(short *)(DAT_08102668 + 2) == 0) {
    *DAT_0810266c = 0;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


