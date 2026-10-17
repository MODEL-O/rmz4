// undefined FUN_0809a334(void)
// entry 0x809a334


undefined4 FUN_0809a334(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x6100);
  bVar3 = *(byte *)(param_1 + 0x11) & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  pbVar2 = (byte *)(param_1 + 0x4a);
  *pbVar2 = *pbVar2 & 0xef | bVar3 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  *pbVar2 = *pbVar2 & 0xdf | 0x20;
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  if (0xf < uVar4) {
    *(undefined1 *)(param_1 + 0x13) = 0x20;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
        iVar5 = ((uVar4 & 7) >> 1) * -8;
      }
      else {
        iVar5 = ((uVar4 & 7) >> 1) << 3;
      }
    }
    else if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
      iVar5 = ((uVar4 & 7) >> 1) << 3;
    }
    else {
      iVar5 = ((uVar4 & 7) >> 1) * -8;
    }
    goto LAB_0809a4b6;
  }
  if (7 < uVar4) {
    *(undefined1 *)(param_1 + 0x25) = 0x17;
    *(undefined1 *)(param_1 + 0x13) = 0x20;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
        iVar5 = ((*(byte *)(param_1 + 0x11) & 7) >> 1) * -8;
      }
      else {
        iVar5 = ((*(byte *)(param_1 + 0x11) & 7) >> 1) << 3;
      }
    }
    else if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
      iVar5 = ((*(byte *)(param_1 + 0x11) & 7) >> 1) << 3;
    }
    else {
      iVar5 = ((*(byte *)(param_1 + 0x11) & 7) >> 1) * -8;
    }
    goto LAB_0809a4b6;
  }
  *(undefined1 *)(param_1 + 0x25) = 0x16;
  bVar3 = *(byte *)(param_1 + 0x11) >> 1;
  uVar4 = (uint)bVar3;
  *(byte *)(param_1 + 0x13) = bVar3 << 2;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if ((*(byte *)(iVar5 + 10) & 0x10) == 0) goto LAB_0809a4ae;
    iVar5 = uVar4 * 3;
  }
  else if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
    iVar5 = uVar4 * 3;
  }
  else {
LAB_0809a4ae:
    iVar5 = uVar4 * -3;
  }
  iVar5 = iVar5 << 1;
LAB_0809a4b6:
  *(int *)(param_1 + 100) = iVar5;
  *(undefined4 *)(param_1 + 0x60) = 0x100;
  *(undefined4 *)(param_1 + 0x68) = 0x20;
  *(undefined2 *)(param_1 + 0xbe) = 0x20;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return in_lr;
}


