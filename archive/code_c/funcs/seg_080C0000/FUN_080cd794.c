// undefined FUN_080cd794(void)
// entry 0x80cd794


undefined4 FUN_080cd794(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar5 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cd7d8);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    return in_lr;
  }
  *(char *)(iVar5 + 0xd7) = *(char *)(iVar5 + 0xd7) + '\x01';
  uVar4 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080cd820;
  }
  else {
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + 0x800 + (uint)*(byte *)(param_1 + 0x10) * -0x2000;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) goto LAB_080cd914;
      if (*(char *)(param_1 + 0x10) != '\0') goto LAB_080cd8b0;
LAB_080cd8c0:
      FUN_0801cf00(param_1,DAT_080cd8e8);
    }
    else {
      if (*(char *)(iVar5 + 0xda) != '\0') goto LAB_080cd914;
      if (*(char *)(param_1 + 0x10) == '\0') goto LAB_080cd8c0;
LAB_080cd8b0:
      FUN_0801cf00(param_1,DAT_080cd8bc);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) && (*(char *)(param_1 + 0x73) == '\x03')) {
        piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cd910);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
        FUN_080cd920(param_1);
        return in_lr;
      }
      goto LAB_080cd914;
    }
    if ((bVar1 != 0) ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != -1))
    goto LAB_080cd914;
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_0801cf00(param_1,DAT_080cd87c);
    }
    else {
      FUN_0801cf00(param_1,DAT_080cd848);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080cd880,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x40;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080cd914:
  FUN_0801cff0(param_1);
  return in_lr;
}


