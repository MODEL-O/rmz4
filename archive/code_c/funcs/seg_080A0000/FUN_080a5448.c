// undefined FUN_080a5448(void)
// entry 0x80a5448


undefined4 FUN_080a5448(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  short asStack_54 [16];
  int local_34 [2];
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  
  FUN_08129258(asStack_54,DAT_080a5514,0x20);
  iVar3 = DAT_080a5524;
  iVar2 = DAT_080a5520;
  iVar6 = *(int *)(*DAT_080a5518 + 0x54);
  iVar7 = *(int *)(*DAT_080a5518 + 0x58);
  uVar4 = DAT_080a5520 * *DAT_080a551c + DAT_080a5524;
  *DAT_080a551c = uVar4 & 0x7fffffff;
  uVar4 = ((uVar4 & 0x7fffffff) >> 0x10 & 1) + 5;
  if (uVar4 != 0) {
    local_24 = local_34;
    do {
      uVar5 = *DAT_080a551c * iVar2 + iVar3;
      local_34[0] = asStack_54[(uVar4 & 7) * 2] + iVar6 +
                    (((uVar5 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
      sVar1 = *(short *)((int)local_34 + (uVar4 & 7) * 4 + -0x1e);
      uVar5 = (uVar5 & 0x7fffffff) * iVar2 + iVar3;
      *DAT_080a551c = uVar5 & 0x7fffffff;
      local_24[1] = sVar1 + iVar7 + (((uVar5 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
      local_2c = 0;
      local_28 = DAT_080a5528;
      FUN_080d9b9c(local_24,&local_2c,0,0);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return in_lr;
}


