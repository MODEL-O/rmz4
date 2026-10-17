// undefined FUN_0809b930(void)
// entry 0x809b930


undefined4 FUN_0809b930(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  short local_2c [4];
  int local_24;
  
  FUN_08129258(local_2c,DAT_0809ba00,8);
  uVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_24 = uVar5 * 2 + -1;
    iVar1 = 0;
    do {
      uVar7 = iVar1 << 6;
      iVar8 = 0;
      iVar1 = iVar1 + 1;
      psVar6 = local_2c;
      do {
        uVar2 = *DAT_0809ba04 * DAT_0809ba08 + DAT_0809ba0c;
        *DAT_0809ba04 = uVar2 & 0x7fffffff;
        uVar7 = uVar7 + local_24 * (((uVar2 & 0x7fffffff) >> 0x10 & 7) + 0xf);
        iVar3 = FUN_080de9ac(param_1,(int)*psVar6,uVar7 & 0xff,uVar5);
        if (iVar3 == 0) break;
        *(char *)(param_1 + 0xb6) = *(char *)(param_1 + 0xb6) + '\x01';
        psVar6 = psVar6 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 4);
    } while (iVar1 < 4);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xb6) == '\0') {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809ba10);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_0809ba14(param_1);
  }
  return in_lr;
}


