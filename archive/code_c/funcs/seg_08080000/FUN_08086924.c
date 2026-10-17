// undefined FUN_08086924(void)
// entry 0x8086924


undefined4 FUN_08086924(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  cVar1 = *(char *)(iVar6 + 9);
  if (*(char *)(iVar5 + 0xd) == '\x04') {
    return in_lr;
  }
  if (1 < *(byte *)(iVar5 + 0xc)) {
    return in_lr;
  }
  if ((((*(uint *)(param_1 + 0x14) & 4) != 0) && (*(char *)(iVar6 + 8) == '\0')) && (cVar1 == '\0'))
  {
    *(undefined1 *)(iVar5 + 0xbc) = 1;
  }
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    return in_lr;
  }
  uVar4 = (uint)(*(int *)(iVar5 + 0x54) < *(int *)(*DAT_08086994 + 0x54)) << 7;
  cVar2 = *(char *)(iVar6 + 8);
  if (cVar2 == '\x04') {
    if (cVar1 != '\0') {
      *(undefined1 *)(iVar5 + 0xb7) = 1;
      return in_lr;
    }
    iVar3 = *(int *)(iVar6 + 0x5c);
    iVar6 = *(int *)(iVar6 + 0x60);
    if ((iVar3 != 0) || (iVar6 != 0)) {
LAB_080869c6:
      uVar4 = FUN_0810d338(iVar3,iVar6);
      uVar4 = uVar4 & 0xff;
    }
    iVar6 = DAT_08086a10;
    *(int *)(iVar5 + 0x5c) = (int)*(short *)((uVar4 + 0x40 & 0xff) * 2 + DAT_08086a10) << 2;
    *(int *)(iVar5 + 0x60) = (int)*(short *)(uVar4 * 2 + iVar6) << 2;
  }
  else {
    if (cVar2 < '\x05') {
      if (cVar2 == '\x01') {
LAB_0808699c:
        iVar3 = *(int *)(iVar5 + 0x54) - *(int *)(*DAT_08086994 + 0x54);
        iVar6 = *(int *)(iVar5 + 0x58) - (*(int *)(*DAT_08086994 + 0x58) + DAT_080869b0);
        goto LAB_080869c6;
      }
    }
    else if (cVar2 == '\b') goto LAB_0808699c;
    *(undefined1 *)(iVar5 + 0xb7) = 1;
  }
  return in_lr;
}


