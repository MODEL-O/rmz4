// undefined FUN_08117e60(void)
// entry 0x8117e60


undefined4 FUN_08117e60(int param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + DAT_08117f44);
  FUN_08002624(0x12);
  *(undefined1 *)(*(int *)(param_1 + DAT_08117f48 + 0x20) + 0x7c) = 1;
  uVar3 = *(ushort *)(iVar5 + 0xa4);
  uVar2 = FUN_0802b61c(iVar5);
  if ((short)(uVar2 & 0xff) < (short)uVar3) {
    uVar3 = FUN_0802b61c(iVar5);
    *(ushort *)(iVar5 + 0xa4) = uVar3 & 0xff;
  }
  FUN_08118048(param_1);
  if (2 < *(byte *)(iVar5 + 0xf8)) {
    *(byte *)(iVar5 + 0xf8) = 2;
  }
  if (2 < *(byte *)(iVar5 + 0xf9)) {
    *(byte *)(iVar5 + 0xf9) = 2;
  }
  FUN_081180f8(param_1);
  if (*(char *)(param_1 + DAT_08117f4c) != *(char *)(iVar5 + 0xc2)) {
    FUN_0802ad9c(*(undefined1 *)(iVar5 + 0xc2));
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_08117f54) * 4 + DAT_08117f50));
  uVar4 = (uint)*(byte *)(iVar5 + 0xf1) + (uint)*(byte *)(iVar5 + 0xf2) +
          (uint)*(byte *)(iVar5 + 0xf3);
  if (*(byte *)(param_1 + DAT_08117f58) < uVar4) {
    *(char *)(DAT_08117f5c + 0x10) = (char)uVar4;
  }
  FUN_0803a964(DAT_08117f60);
  if ((uint)*(byte *)(iVar5 + 0xf1) + (uint)*(byte *)(iVar5 + 0xf2) + (uint)*(byte *)(iVar5 + 0xf3)
      == 0) {
    FUN_081091c8(DAT_08117f94);
  }
  else if (*(char *)(param_1 + DAT_08117f64) == '\0') {
    FUN_08109320(iVar5);
  }
  uVar1 = FUN_0803891c(iVar5);
  FUN_0802b53c(iVar5,uVar1);
  FUN_081126ac(param_1,0x600);
  return in_lr;
}


