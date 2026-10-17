// undefined FUN_080e2214(void)
// entry 0x80e2214


undefined4 FUN_080e2214(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) != '\x03') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080e229c));
  }
  FUN_0801cf00(param_1,DAT_080e22a0 + (uint)*(byte *)(param_1 + 0x11) & 0xffff);
  iVar6 = DAT_080e22a4;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)((uint)*(byte *)(param_1 + 0x11) * 8 + DAT_080e22a4);
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)((uint)*(byte *)(param_1 + 0x11) * 8 + iVar6 + 4);
  *(int *)(param_1 + 0x58) = iVar5;
  iVar6 = DAT_080e22a8;
  *(undefined4 *)(param_1 + 0x5c) =
       *(undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 8 + DAT_080e22a8);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 8 + iVar6 + 4)
  ;
  if (*(int *)(DAT_080e22ac + DAT_080e22b0) < iVar5 + DAT_080e22b4) {
    uVar2 = 0x10;
  }
  else {
    uVar2 = 0x40;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  puVar1 = DAT_080e233c;
  if (*(byte *)(param_1 + 0x11) < 3) {
    iVar6 = *(int *)(param_1 + 0x5c);
    uVar3 = *DAT_080e233c * DAT_080e2340 + DAT_080e2344;
    *DAT_080e233c = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = iVar6 + -0x80 + ((uVar3 & 0x7fffffff) >> 0x10 & 0xff);
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar6 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar6 >> 8;
  }
  uVar3 = *puVar1 * DAT_080e2340 + DAT_080e2344;
  *puVar1 = uVar3 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar3 >> 0x10) & 0x1f) + 0x1e;
  *(undefined1 *)(param_1 + 0x74) = 1;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e2348);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_080e234c(param_1);
  return in_lr;
}


