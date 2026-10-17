// undefined FUN_0808adb0(void)
// entry 0x808adb0


undefined4 FUN_0808adb0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    pbVar6 = (byte *)(param_1 + 0xc0);
    FUN_0801cf00(param_1,(uint)*pbVar6 * 0x20000 + DAT_0808aeac >> 0x10);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    uVar5 = (uint)*(byte *)(param_1 + 0xb4);
    local_28 = *(undefined4 *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58) + DAT_0808aeb0;
    if (*pbVar6 == 1) {
      local_24 = *(int *)(param_1 + 0x58) + 0x1a00;
    }
    FUN_080d0dc4(0,&local_28,0x200,uVar5);
    if (uVar5 == (*(byte *)(param_1 + 10) >> 4 & 1)) {
      uVar5 = uVar5 ^ 1;
    }
    *(uint *)(param_1 + 0x5c) = uVar5 * -0x200 + 0x100;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) >> 1;
    FUN_080d8e58(param_1,*pbVar6);
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    iVar3 = *(int *)(param_1 + 0x5c) * 0xb4;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    iVar3 = *(int *)(param_1 + 0x60) * 0xb4;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar3 >> 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar3 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54));
  if (iVar3 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar3 = FUN_0800834c(iVar3,*(undefined4 *)(param_1 + 0x58));
    if (iVar3 < 1) goto LAB_0808aec6;
  }
  else {
    iVar3 = FUN_0800816c(iVar3,*(undefined4 *)(param_1 + 0x58));
    if (-1 < iVar3) goto LAB_0808aec6;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
LAB_0808aec6:
  iVar3 = *(int *)(param_1 + 0x5c) * 0xe1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  if (((*(int *)(param_1 + 0x60) != 0) || (*(char *)(param_1 + 0xc0) == '\x01')) &&
     (iVar3 = *(int *)(param_1 + 0x60) + 0x40, *(int *)(param_1 + 0x60) = iVar3, 0x700 < iVar3)) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 & 0xfe;
    local_28 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58);
    local_24 = DAT_0808afcc + local_1c;
    uVar5 = DAT_0808afd4 * *DAT_0808afd0 + DAT_0808afd8;
    *DAT_0808afd0 = uVar5 & 0x7fffffff;
    uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 3;
    local_20 = local_28;
    FUN_080d8ef8(&local_20,bVar1 >> 4 & 1,DAT_0808afdc,uVar5,0);
    FUN_080d8ef8(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,DAT_0808afe0,uVar5,0);
    FUN_080d8ef8(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,DAT_0808afe4,uVar5,0);
    FUN_080d0c88(1,&local_28);
    FUN_08002b10(0x2a);
    FUN_0802ab88(3,0x1d,param_1 + 0x54);
    if (*(ushort *)(DAT_0808afe8 + 0xc) <= DAT_0808afec) {
      *(ushort *)(DAT_0808afe8 + 0xc) = *(ushort *)(DAT_0808afe8 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808aff0);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  }
  return in_lr;
}


