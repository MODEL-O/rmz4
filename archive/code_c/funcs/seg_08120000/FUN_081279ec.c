// undefined FUN_081279ec(void)
// entry 0x81279ec


undefined4 FUN_081279ec(int param_1)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_14;
  
  *DAT_08127ab4 = 0x8f;
  puVar1 = DAT_08127ab8;
  *DAT_08127ab8 = 0;
  puVar2 = DAT_08127abc;
  *DAT_08127abc = 8;
  puVar2[6] = 8;
  puVar2[0x16] = 8;
  puVar2[2] = 0x80;
  puVar2[10] = 0x80;
  puVar2[0x1a] = 0x80;
  puVar2[0xd] = 0;
  *(undefined1 *)puVar1 = 0x77;
  piVar4 = (int *)*DAT_08127ac0;
  iVar5 = *piVar4;
  if (iVar5 == DAT_08127ac4) {
    *piVar4 = iVar5 + 1;
    iVar3 = DAT_08127ac8;
    *(undefined **)(DAT_08127ac8 + 0x20) = PTR_LAB_08128960_1_08127acc;
    *(undefined **)(iVar3 + 0x44) = PTR_LAB_08127664_1_08127ad0;
    *(undefined **)(iVar3 + 0x4c) = PTR_LAB_08127678_1_08127ad4;
    *(undefined **)(iVar3 + 0x70) = PTR_FUN_08128ab8_1_08127ad8;
    *(undefined **)(iVar3 + 0x74) = PTR_LAB_081275fc_1_08127adc;
    *(undefined **)(iVar3 + 0x78) = PTR_FUN_08127bfc_1_08127ae0;
    *(undefined **)(iVar3 + 0x7c) = PTR_FUN_08127388_1_08127ae4;
    *(undefined **)(iVar3 + 0x80) = PTR_FUN_08127fc4_1_08127ae8;
    *(undefined **)(iVar3 + 0x84) = PTR_FUN_0812808c_1_08127aec;
    piVar4[7] = param_1;
    piVar4[10] = (int)PTR_FUN_081282a0_1_08127af0;
    piVar4[0xb] = (int)PTR_FUN_081281e8_1_08127af4;
    piVar4[0xc] = (int)PTR_LAB_08128140_1_08127af8;
    *(char *)(piVar4 + 3) = (char)DAT_08127afc;
    local_14 = 0;
    FUN_08128be4(&local_14,param_1,DAT_08127b00);
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)(param_1 + 0x1c) = 0x11;
    *(undefined1 *)(param_1 + 0x41) = 2;
    *(undefined1 *)(param_1 + 0x5c) = 0x22;
    *(undefined1 *)(param_1 + 0x81) = 3;
    *(undefined1 *)(param_1 + 0x9c) = 0x44;
    *(undefined1 *)(param_1 + 0xc1) = 4;
    *(undefined1 *)(param_1 + 0xdc) = 0x88;
    *piVar4 = iVar5;
  }
  return in_lr;
}


