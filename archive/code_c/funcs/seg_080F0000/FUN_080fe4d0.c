// undefined FUN_080fe4d0(void)
// entry 0x80fe4d0


undefined4 FUN_080fe4d0(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  iVar6 = DAT_080fe648;
  iVar5 = DAT_080fe638;
  iVar4 = DAT_080fe634;
  puVar3 = DAT_080fe630;
  iVar2 = DAT_080fe538;
  iVar1 = DAT_080fe534;
  if (param_2 == '\0') {
    local_28 = *param_1 + 0x800;
    local_24 = param_1[1] + DAT_080fe534;
    FUN_080e3db4(&local_28,DAT_080fe538,0,0);
    local_28 = *param_1 + DAT_080fe53c;
    local_24 = param_1[1] + iVar1;
    FUN_080e3db4(&local_28,iVar2 + -0x1c,0,0);
  }
  else {
    uVar7 = DAT_080fe634 * *DAT_080fe630 + DAT_080fe638;
    local_28 = *param_1 + 0x200 + ((uVar7 & 0x7fffffff) >> 0x10 & DAT_080fe63c);
    uVar7 = DAT_080fe634 * (uVar7 & 0x7fffffff) + DAT_080fe638;
    local_24 = param_1[1] + DAT_080fe640 + ((uVar7 & 0x7fffffff) >> 0x10 & DAT_080fe644) +
               DAT_080fe648;
    uVar7 = DAT_080fe634 * (uVar7 & 0x7fffffff) + DAT_080fe638;
    *DAT_080fe630 = uVar7 & 0x7fffffff;
    iVar1 = DAT_080fe64c;
    FUN_080e3db4(&local_28,((uVar7 & 0x7fffffff) >> 0x10 & 3) * 0x1c + DAT_080fe64c,0,0);
    uVar7 = iVar4 * *puVar3 + iVar5;
    local_28 = (*param_1 + DAT_080fe650) - ((uVar7 & 0x7fffffff) >> 0x10 & DAT_080fe63c);
    uVar7 = iVar4 * (uVar7 & 0x7fffffff) + iVar5;
    local_24 = param_1[1] + DAT_080fe640 + ((uVar7 & 0x7fffffff) >> 0x10 & DAT_080fe644) + iVar6;
    uVar7 = iVar4 * (uVar7 & 0x7fffffff) + iVar5;
    *puVar3 = uVar7 & 0x7fffffff;
    FUN_080e3db4(&local_28,((uVar7 & 0x7fffffff) >> 0x10 & 3) * 0x1c + iVar1 + -0x70,0,0);
  }
  return in_lr;
}


