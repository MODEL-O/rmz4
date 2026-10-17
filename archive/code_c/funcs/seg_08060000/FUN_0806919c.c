// undefined FUN_0806919c(void)
// entry 0x806919c


undefined4 FUN_0806919c(int param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0xb4);
  uVar4 = *(undefined4 *)(param_1 + 0xb8);
  uVar2 = *(undefined4 *)(param_1 + 0xbc);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(*(int *)(param_1 + 0xc0) + 10) = *(byte *)(*(int *)(param_1 + 0xc0) + 10) & 0xfe;
    puVar1 = DAT_0806922c;
    FUN_0801cf00(uVar3,*DAT_0806922c);
    FUN_0801cf00(uVar4,puVar1[4]);
    FUN_0801cf00(uVar2,puVar1[0xc]);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(uVar3);
  FUN_0801cff0(uVar4);
  FUN_0801cff0(uVar2);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (((*(ushort *)(DAT_08069230 + 8) & 8) == 0) && (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


