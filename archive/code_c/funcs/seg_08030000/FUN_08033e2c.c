// undefined FUN_08033e2c(void)
// entry 0x8033e2c


undefined4 FUN_08033e2c(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  bool bVar4;
  
  cVar1 = FUN_0803a428(param_1,*(char *)(param_1 + 0xc0) != '\x02');
  bVar4 = cVar1 == '\x02';
  uVar2 = *(uint *)(param_1 + 600);
  if ((uVar2 & 0x40) == 0) {
    if ((uVar2 & 0x80) == 0) {
      FUN_0801cf00(param_1,DAT_08033f3c);
      *(undefined1 *)(param_1 + 0x156) = 0;
      iVar3 = DAT_08033f40;
      goto joined_r0x08033efe;
    }
    FUN_0801cf00(param_1,DAT_08033ee0);
    *(undefined1 *)(param_1 + 0x156) = 2;
    if ((bVar4) ||
       (bVar4 = *(char *)(param_1 + DAT_08033ee4) == '\x03', iVar3 = DAT_08033ee8, bVar4))
    goto LAB_08033f0c;
  }
  else {
    if ((uVar2 & 0x30) == 0) {
      FUN_0801cf00(param_1,0x2700);
      *(undefined1 *)(param_1 + 0x156) = 3;
      iVar3 = DAT_08033ea8;
    }
    else {
      FUN_0801cf00(param_1,DAT_08033e84);
      *(undefined1 *)(param_1 + 0x156) = 1;
      iVar3 = DAT_08033e88;
    }
joined_r0x08033efe:
    if (bVar4) goto LAB_08033f0c;
  }
  if (*(char *)(param_1 + iVar3) == '\x03') {
    bVar4 = true;
  }
LAB_08033f0c:
  FUN_08040664(param_1,bVar4);
  *(undefined1 *)(param_1 + DAT_08033f44) = 0xe;
  *(byte *)(param_1 + DAT_08033f48) = *(byte *)(param_1 + DAT_08033f48) & 0xf7;
  *(undefined1 *)(param_1 + DAT_08033f4c) = 1;
  FUN_08033f50(param_1);
  return in_lr;
}


