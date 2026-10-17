// undefined FUN_080d96cc(void)
// entry 0x80d96cc


undefined4 FUN_080d96cc(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d9710);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  bVar1 = *(byte *)(param_1 + 0x11) >> 4;
  if (bVar1 == 1) {
    FUN_0801cf00(param_1,DAT_080d97c0 + (uint)*(byte *)((uVar4 & 4) * 3 + DAT_080d97bc + 1) & 0xffff
                );
    uVar4 = *DAT_080d97c4 * DAT_080d97c8 + DAT_080d97cc;
    *DAT_080d97c4 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = -((uVar4 & 0x7fffffff) >> 0x10 & 0x7f);
    uVar3 = DAT_080d97d0;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080d9818;
    FUN_0801cf00(param_1,DAT_080d9764 + (uint)*(byte *)((uVar4 & 4) * 3 + DAT_080d9760) & 0xffff);
    uVar4 = *DAT_080d9768 * DAT_080d976c + DAT_080d9770;
    *DAT_080d9768 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = ((uVar4 & 0x7fffffff) >> 0x10 & 0x7f) + 0x180;
    uVar3 = DAT_080d9774;
  }
  else {
    if (bVar1 != 2) goto LAB_080d9818;
    FUN_0801cf00(param_1,DAT_080d9848 + (uint)*(byte *)((uVar4 & 4) * 3 + DAT_080d9844 + 2) & 0xffff
                );
    uVar4 = *DAT_080d984c * DAT_080d9850 + DAT_080d9854;
    *DAT_080d984c = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = ((uVar4 & 0x7fffffff) >> 0x10 & 0x7f) + 0x80;
    uVar3 = DAT_080d9858;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar3;
LAB_080d9818:
  FUN_0801cff0(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  *(byte *)(param_1 + 0x12) = '@' - (*(byte *)(param_1 + 0x11) >> 4);
  FUN_080d94b0(param_1);
  return in_lr;
}


