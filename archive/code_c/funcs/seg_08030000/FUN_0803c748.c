// undefined FUN_0803c748(void)
// entry 0x803c748


undefined4 FUN_0803c748(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0x10) != *(char *)(iVar4 + DAT_0803c798)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803c79c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    return in_lr;
  }
  if ((*(char *)(param_1 + 0xc3) != '\0') && ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0)) {
    FUN_08002b10(0x2b);
    *(undefined1 *)(param_1 + 0xc3) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x06') {
    if (*(char *)(iVar4 + 0xd) == '\x02') {
      bVar1 = *(byte *)(iVar4 + 10) >> 4;
      bVar3 = bVar1 & 1;
      if ((bVar1 & 1) != 0) {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
        goto LAB_0803c80e;
      }
    }
    else {
      bVar3 = ~(*(byte *)(iVar4 + 10) >> 4) & 1;
      if (bVar3 != 0) {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
        goto LAB_0803c80e;
      }
    }
  }
  else {
    bVar1 = *(byte *)(iVar4 + 10) >> 4;
    bVar3 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_0803c80e;
    }
  }
  bVar1 = *(byte *)(param_1 + 10) & 0xef;
LAB_0803c80e:
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0803c848));
  return in_lr;
}


