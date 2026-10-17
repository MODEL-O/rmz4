// undefined FUN_080696b4(void)
// entry 0x80696b4


undefined4 FUN_080696b4(int param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0xb4);
  iVar5 = *(int *)(param_1 + 0xb8);
  uVar4 = *(undefined4 *)(param_1 + 0xbc);
  bVar2 = *(byte *)(param_1 + 10) >> 4;
  bVar6 = bVar2 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(*(int *)(param_1 + 0xc0) + 10) = *(byte *)(*(int *)(param_1 + 0xc0) + 10) & 0xfe;
    puVar1 = DAT_08069714;
    FUN_0801cf00(uVar3,*DAT_08069714);
    FUN_0801cf00(iVar5,puVar1[10]);
    FUN_0801cf00(uVar4,puVar1[0xc]);
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(iVar5 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar5 + 10) | 0x10;
    }
    *(byte *)(iVar5 + 10) = bVar2;
    *(byte *)(iVar5 + 0x4c) = bVar6;
    *(byte *)(iVar5 + 0x4a) = *(byte *)(iVar5 + 0x4a) & 0xef | bVar6 << 4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(uVar3);
  FUN_0801cff0(iVar5);
  FUN_0801cff0(uVar4);
  if (*(char *)(iVar5 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


