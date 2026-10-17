// undefined FUN_0802788c(void)
// entry 0x802788c


undefined8 FUN_0802788c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  iVar2 = DAT_080278ec;
  iVar3 = *(int *)(param_1 + 0xd4);
  if (iVar3 == 0) {
    pbVar5 = *(byte **)(param_1 + 0xc);
    bVar1 = *pbVar5;
    while (bVar1 != 0xff) {
      iVar3 = FUN_08128f80(param_1,*(undefined4 *)((uint)*pbVar5 * 4 + iVar2));
      if (iVar3 != 0) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
        uVar4 = 0;
        goto LAB_080278e4;
      }
      iVar3 = *(int *)(param_1 + 0xc);
      pbVar5 = (byte *)(iVar3 + 8);
      *(byte **)(param_1 + 0xc) = pbVar5;
      bVar1 = *(byte *)(iVar3 + 8);
    }
    *(byte *)(DAT_080278f0 + 0x12) = *(byte *)(DAT_080278f0 + 0x12) & 0xfe;
    uVar4 = 1;
  }
  else {
    *(int *)(param_1 + 0xd4) = iVar3 + -1;
    uVar4 = 0;
  }
LAB_080278e4:
  return CONCAT44(in_lr,uVar4);
}


