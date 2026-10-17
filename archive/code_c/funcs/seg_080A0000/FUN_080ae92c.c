// undefined FUN_080ae92c(void)
// entry 0x80ae92c


undefined4 FUN_080ae92c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        iVar2 = param_1 + 0x54;
        FUN_080ae714(uVar3,iVar2,1,0x30);
        FUN_080ae714(uVar3,iVar2,1,0x40);
        FUN_080ae714(uVar3,iVar2,1,0x50);
      }
      else if (*(char *)(param_1 + 0x11) == '\x01') {
        iVar2 = param_1 + 0x54;
        FUN_080ae714(uVar3,iVar2,1,0xf0);
        FUN_080ae714(uVar3,iVar2,1,0);
        FUN_080ae714(uVar3,iVar2,1,0x10);
      }
      else {
        iVar2 = param_1 + 0x54;
        FUN_080ae714(uVar3,iVar2,1,0xb0);
        FUN_080ae714(uVar3,iVar2,1,0xc0);
        FUN_080ae714(uVar3,iVar2,1,0xd0);
      }
    }
    else {
      iVar2 = param_1 + 0x54;
      FUN_080ae714(uVar3,iVar2,1,0x70);
      FUN_080ae714(uVar3,iVar2,1,0x80);
      FUN_080ae714(uVar3,iVar2,1,0x90);
    }
  }
  else {
    if (*(char *)(param_1 + 0xd) == '\0') {
      FUN_0801cf00(param_1,DAT_080aea54);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080aea58);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


