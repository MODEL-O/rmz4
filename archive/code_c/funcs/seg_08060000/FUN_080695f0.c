// undefined FUN_080695f0(void)
// entry 0x80695f0


undefined4 FUN_080695f0(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0xb4);
  iVar6 = *(int *)(param_1 + 0xb8);
  uVar4 = *(undefined4 *)(param_1 + 0xbc);
  bVar5 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(*(int *)(param_1 + 0xc0) + 10) = *(byte *)(*(int *)(param_1 + 0xc0) + 10) & 0xfe;
    puVar1 = DAT_08069654;
    FUN_0801cf00(uVar3,*DAT_08069654);
    FUN_0801cf00(iVar6,puVar1[0xc]);
    FUN_0801cf00(uVar4,puVar1[0xc]);
    bVar5 = (bVar5 >> 4 & 1) + 1 & 1;
    if (bVar5 == 0) {
      bVar2 = *(byte *)(iVar6 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar6 + 10) | 0x10;
    }
    *(byte *)(iVar6 + 10) = bVar2;
    *(byte *)(iVar6 + 0x4c) = bVar5;
    *(byte *)(iVar6 + 0x4a) = *(byte *)(iVar6 + 0x4a) & 0xef | bVar5 << 4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(uVar3);
  FUN_0801cff0(iVar6);
  FUN_0801cff0(uVar4);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


