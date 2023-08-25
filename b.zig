const c = @cImport(@cInclude("a.h"));

pub fn main() void {
	_ = c.BAZ;
}
