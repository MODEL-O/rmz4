// undefined FUN_0806cb5c(void)
// entry 0x806cb5c


undefined4 FUN_0806cb5c(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806cc0c);
    FUN_08002b10(0xc6);
    FUN_08001d30(DAT_0806cc10,
                 ((uint)*(ushort *)(DAT_0806cc14 + 0xfa) -
                 (uint)(*(ushort *)(DAT_0806cc10 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0806cc18,
                 ((uint)*(ushort *)(DAT_0806cc1c + 0xfa) - (uint)*(byte *)(DAT_0806cc18 + 7)) * 0x20
                 + 0x200);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_0806cc20);
    iVar5 = *(int *)(param_1 + 0x54);
    if (*(int *)(*DAT_0806cc24 + 0x54) < iVar5) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xcc) - (iVar5 + 0x2800);
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 200) - (iVar5 + DAT_0806cc64);
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    uVar3 = FUN_08128fb8(*(int *)(param_1 + 0x5c) >> 1,0xc);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = DAT_0806cc68;
LAB_0806cce4:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    return in_lr;
  }
  if (cVar1 == '\x01') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar5 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    if (iVar5 < 1) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0806cc9c);
    FUN_0801cff0(param_1);
    goto LAB_0806cce4;
  }
  if (cVar1 == '\x02') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar5 <= *(int *)(param_1 + 0xb8)) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0806ccec);
    FUN_08002b10(0xd3);
    FUN_0801cff0(param_1);
    FUN_08005784(param_1 + 0x74,DAT_0806ccf0);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    goto LAB_0806cce4;
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if (*(short *)(param_1 + 0xa4) < 0x10) {
    *(undefined1 *)(param_1 + 0xdd) = 0x3c;
    uVar4 = *DAT_0806cd34 * DAT_0806cd38 + DAT_0806cd3c;
    *DAT_0806cd34 = uVar4 & 0x7fffffff;
    if (0x11 < ((uVar4 & 0x7fffffff) >> 0x10 & 0x1f)) {
      *(undefined1 *)(param_1 + 0xdc) = 3;
      goto LAB_0806cd80;
    }
LAB_0806cd78:
    uVar2 = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0xdd) = 0x50;
    uVar4 = *DAT_0806cd6c * DAT_0806cd70 + DAT_0806cd74;
    *DAT_0806cd6c = uVar4 & 0x7fffffff;
    if (0x13 < ((uVar4 & 0x7fffffff) >> 0x10 & 0x1f)) goto LAB_0806cd78;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xdc) = uVar2;
LAB_0806cd80:
  *(undefined1 *)(param_1 + 0xd) = 0x1e;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


