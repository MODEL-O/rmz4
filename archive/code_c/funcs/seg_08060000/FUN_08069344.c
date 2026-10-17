// undefined FUN_08069344(void)
// entry 0x8069344


undefined4 FUN_08069344(int param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  iVar6 = *(int *)(param_1 + 0xb8);
  iVar5 = *(int *)(param_1 + 0xbc);
  iVar4 = *(int *)(param_1 + 0xc0);
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar3 = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(iVar4 + 0x58) = uVar3;
    *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfe;
    puVar1 = DAT_080693d0;
    FUN_0801cf00(uVar2,*DAT_080693d0);
    FUN_0801cf00(iVar6,puVar1[8]);
    FUN_0801cf00(iVar5,puVar1[0x10]);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(uVar2);
  FUN_0801cff0(iVar6);
  FUN_0801cff0(iVar5);
  if ((*(char *)(iVar6 + 0x73) == '\x03') && (*(char *)(iVar5 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


