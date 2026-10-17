// undefined FUN_080a66b4(void)
// entry 0x80a66b4


undefined8 FUN_080a66b4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  iVar3 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x54) >> 8;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 0x101) {
    iVar3 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x58) >> 8;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (0x100 < iVar3) goto LAB_080a66f0;
    *(undefined1 *)(param_1 + 0xb5) = 1;
  }
  else {
LAB_080a66f0:
    if (*(char *)(param_1 + 0xb5) != '\x02') {
      *(char *)(param_1 + 0xb5) = '\x02';
      bVar2 = *(byte *)(param_1 + 10);
      bVar5 = ~(bVar2 >> 4) & 1;
      if (bVar5 == 0) {
        bVar2 = bVar2 & 0xef;
      }
      else {
        bVar2 = bVar2 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(byte *)(param_1 + 0x4c) = bVar5;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
    }
  }
  if (*(char *)(param_1 + 0xb5) == '\x01') {
    iVar6 = *(int *)(*DAT_080a6790 + 0x54);
    iVar3 = iVar6 - *(int *)(param_1 + 0x54) >> 8;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < 0x100) {
      iVar3 = *(int *)(*DAT_080a6790 + 0x58) - *(int *)(param_1 + 0x58) >> 8;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 0x100) {
        if (iVar6 < *(int *)(param_1 + 0x54)) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
          *(undefined1 *)(param_1 + 0x4c) = 0;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        }
        else {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
          *(undefined1 *)(param_1 + 0x4c) = 1;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        }
        goto LAB_080a67be;
      }
    }
    uVar4 = 2;
  }
  else {
LAB_080a67be:
    if ((bVar1 >> 4 & 1) == (*(byte *)(param_1 + 10) >> 4 & 1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  return CONCAT44(in_lr,uVar4);
}


